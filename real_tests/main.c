/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:21:04 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/14 23:51:34 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

static void	print_header_fd(int fd)
{
	my_putendl_fd(CLEAR""ESC"[1;1H"BOLD""BLUE, fd);
	my_putendl_fd("Start 42 - Unit Tests", fd);
	my_putendl_fd("_____________________   _____  .____     ", fd);
	my_putendl_fd("\\______   \\_   _____/  /  _  \\ |    |    ", fd);
	my_putendl_fd(" |       _/|    __)_  /  /_\\  \\|    |    ", fd);
	my_putendl_fd(" |    |   \\|        \\/    |    \\    |___ ", fd);
	my_putendl_fd(" |____|_  /_______  /\\____|__  /_______ \\", fd);
	my_putendl_fd("        \\/        \\/         \\/        \\/", fd);
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
	status |= ft_atoi_launcher();
	status |= ft_strncmp_launcher();
	print_result(status, STDOUT_FILENO);
	print_result(status, g_fd);
	close(g_fd);
	return (status);
}
