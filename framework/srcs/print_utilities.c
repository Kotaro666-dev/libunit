/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_utilities.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 08:21:56 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/10 08:24:12 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	my_putendl_color_fd(char *str, char *color, int fd)
{
	if (fd == STDOUT_FILENO)
	{
		my_putstr_fd(color, fd);
		my_putendl_fd(str, fd);
		my_putstr_fd(RESET, fd);
	}
	else
	{
		my_putendl_fd(str, fd);
	}
}

void	my_putstr_color_fd(char *str, char *color, int fd)
{
	if (fd == STDOUT_FILENO)
	{
		my_putstr_fd(color, fd);
		my_putstr_fd(str, fd);
		my_putstr_fd(RESET, fd);
	}
	else
	{
		my_putstr_fd(str, fd);
	}
}

void	print_result_fd(int result, int fd)
{
	if (result == ST_OK)
		my_putendl_color_fd(MSG_OK, GREEN, fd);
	else if (result == ST_KO)
		my_putendl_color_fd(MSG_KO, RED, fd);
	else if (result == ST_SEGV)
		my_putendl_color_fd(MSG_SEGV, YELLOW, fd);
	else if (result == ST_BUSE)
		my_putendl_color_fd(MSG_BUSE, YELLOW, fd);
	else if (result == ST_ABORT)
		my_putendl_color_fd(MSG_ABORT, YELLOW, fd);
	else if (result == ST_FPE)
		my_putendl_color_fd(MSG_FPE, YELLOW, fd);
}

void	print_name_fd(char *name, int fd)
{
	my_putstr_fd("	> ", fd);
	my_putstr_fd(name, fd);
	my_putstr_fd(" : ", fd);
}
