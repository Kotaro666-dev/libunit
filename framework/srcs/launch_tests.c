/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 12:23:35 by kkamashi          #+#    #+#             *
/*   Updated: 2021/05/09 17:24:36 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "constants.h"

static void	child_proc(t_unit_test *test)
{
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
		else
			test->result = ST_KO;
	}
	if (WIFSIGNALED(wstatus))
	{
		if (WTERMSIG(wstatus) == SIGSEGV)
			test->result = ST_SEGV;
		else if (WTERMSIG(wstatus) == SIGBUS)
			test->result = ST_BUSE;
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
		pid = fork();
		if (pid < 0)
		{
			perror("launch_tests");
			exit(-1);
		}
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
