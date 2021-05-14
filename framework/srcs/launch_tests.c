/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 12:23:35 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/13 23:17:54 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "constants.h"

static void	validate_member(t_unit_test *test)
{
	if (!test->name)
	{
		errno = E_NONAME;
		exit_perror("launch_tests", FAILURE);
	}
	if (!test->func)
	{
		errno = E_NOFUNC;
		exit_perror(test->name, FAILURE);
	}
}

static void	child_proc(t_unit_test *test)
{
	signal(SIGALRM, signal_handler);
	alarm(TIMEOUT);
	exit(test->func());
}

static void	parent_proc(t_unit_test *test, int *status)
{
	int	wstatus;

	wait(&wstatus);
	if (WIFEXITED(wstatus))
	{
		if (WEXITSTATUS(wstatus) == 0)
			test->result = ST_OK;
		else if (WEXITSTATUS(wstatus) == SIGALRM)
			test->result = ST_ALARM;
		else
			test->result = ST_KO;
	}
	if (WIFSIGNALED(wstatus))
	{
		if (WTERMSIG(wstatus) == SIGSEGV)
			test->result = ST_SEGV;
		else if (WTERMSIG(wstatus) == SIGBUS)
			test->result = ST_BUSE;
		else if (WTERMSIG(wstatus) == SIGABRT)
			test->result = ST_ABORT;
		else if (WTERMSIG(wstatus) == SIGFPE)
			test->result = ST_FPE;
	}
	if (test->result != ST_OK)
		*status = -1;
}

static int	run_tests(t_unit_test **testlist)
{
	int			status;
	t_unit_test	*current;
	pid_t		pid;

	status = 0;
	current = *testlist;
	while (current)
	{
		validate_member(current);
		pid = fork();
		if (pid < 0)
			exit_perror("launch_tests", FAILURE);
		else if (pid == 0)
			child_proc(current);
		else
			parent_proc(current, &status);
		current = current->next;
	}
	return (status);
}

int 		launch_tests(t_unit_test **testlist)
{
	int status;

	status = run_tests(testlist);
	display_results(testlist);
	append_report(testlist);
	clear_tests(testlist);
	return (status);
}
