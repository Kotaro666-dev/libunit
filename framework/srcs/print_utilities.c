/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_utilities.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 08:21:56 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 23:45:51 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	my_putendl_color_fd(char *str, char *color, int fd)
{
	my_putstr_fd(color, fd);
	my_putendl_fd(str, fd);
	my_putstr_fd(RESET, fd);
}

void	my_putstr_color_fd(char *str, char *color, int fd)
{
	my_putstr_fd(color, fd);
	my_putstr_fd(str, fd);
	my_putstr_fd(RESET, fd);
}

void	print_result_fd(int result, int fd)
{
	if (result == ST_OK)
		my_putstr_color_fd(MSG_OK, GREEN, fd);
	else if (result == ST_KO)
		my_putstr_color_fd(MSG_KO, RED, fd);
	else if (result == ST_SEGV)
		my_putstr_color_fd(MSG_SEGV, YELLOW, fd);
	else if (result == ST_BUSE)
		my_putstr_color_fd(MSG_BUSE, YELLOW, fd);
	else if (result == ST_ABORT)
		my_putstr_color_fd(MSG_ABORT, YELLOW, fd);
	else if (result == ST_FPE)
		my_putstr_color_fd(MSG_FPE, YELLOW, fd);
	else if (result == ST_ALARM)
		my_putstr_color_fd(MSG_ALARM, YELLOW, fd);
}

void	print_total_fd(int ok, int total, int fd)
{
	my_putstr_fd("\n"BOLD""YELLOW, fd);
	my_putstr_fd("Total : ", fd);
	my_putnbr_fd(ok, fd);
	my_putstr_fd("/", fd);
	my_putnbr_fd(total, fd);
	my_putendl_fd("\n-----------------------------------\n"RESET, fd);
}

void	print_test_fd(char *test, int fd)
{
	my_putstr_fd(UNDER""BOLD, fd);
	my_putendl_color_fd(test, PURPLE, fd);
	my_putstr_fd("\n"UNDER""BOLD, fd);
	my_putstr_color_fd("RESULT", BLUE, fd);
	my_putstr_fd("\t\t", fd);
	my_putstr_fd(UNDER""BOLD, fd);
	my_putendl_color_fd("TestCase", BLUE, fd);
}
