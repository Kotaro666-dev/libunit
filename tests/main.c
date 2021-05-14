/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 08:43:16 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 23:55:40 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	print_header_fd(int fd)
{
	my_putendl_fd(CLEAR""ESC"[1;1H"BOLD""BLUE, fd);
	my_putendl_fd("Start 42 - Unit Tests", fd);
	my_putendl_fd("______________________ _____________________________", fd);
	my_putendl_fd("\\__    ___/\\_   _____//   _____/\\__    ___/   _____/", fd);
	my_putendl_fd("  |    |    |    __)_ \\_____  \\   |    |  \\_____  \\ ", fd);
	my_putendl_fd("  |    |    |        \\/        \\  |    |  /        \\", fd);
	my_putendl_fd("  |____|   /_______  /_______  /  |____| /_______  /", fd);
	my_putendl_fd("                   \\/        \\/                  \\/ ", fd);
	my_putendl_fd(RESET, fd);
}

static void	create_report(void)
{
	g_fd = open(FILE_PATH, O_CREAT | O_WRONLY, S_IRWXU);
	if (g_fd == -1)
	{
		return ;
	}
	print_header_fd(g_fd);
}

static void	print_result(int status, int fd)
{
	if (status == SUCCESS)
	{
		my_putstr_fd(BOLD""GREEN, fd);
		my_putendl_fd("   ______  ________________________", fd);
		my_putendl_fd("  / __/ / / / ___/ ___/ __/ __/ __/", fd);
		my_putendl_fd(" _\\ \\/ /_/ / /__/ /__/ _/_\\ \\_\\ \\  ", fd);
		my_putendl_fd("/___/\\____/\\___/\\___/___/___/___/  ", fd);
		my_putendl_fd(RESET, fd);
	}
	else
	{
		my_putstr_fd(BOLD""RED, fd);
		my_putendl_fd("   _______   ______   __  _____  ____", fd);
		my_putendl_fd("  / __/ _ | /  _/ /  / / / / _ \\/ __/", fd);
		my_putendl_fd(" / _// __ |_/ // /__/ /_/ / , _/ _/  ", fd);
		my_putendl_fd("/_/ /_/ |_/___/____/\\____/_/|_/___/  ", fd);
		my_putendl_fd(RESET, fd);
	}
}

int	main(void)
{
	int	status;

	status = SUCCESS;
	print_header_fd(STDOUT_FILENO);
	create_report();
	status |= strlen_launcher();
	status |= ko_launcher();
	status |= segv_launcher();
	status |= buse_launcher();
	status |= abort_launcher();
	status |= fpe_launcher();
	status |= alarm_launcher();
	print_result(status, STDOUT_FILENO);
	print_result(status, g_fd);
	close(g_fd);
	return (status);
}
