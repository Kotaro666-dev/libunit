/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_report.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 16:48:29 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/09 17:28:53 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static int		my_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

static void		print_result(int fd, int result)
{
	if (result == ST_OK)
	{
		write(fd, MSG_OK, my_strlen(MSG_OK));
	}
	else if (result == ST_KO)
	{
		write(fd, MSG_KO, my_strlen(MSG_KO));
	}
	else if (result == ST_SEGV)
	{
		write(fd, MSG_SEGV, my_strlen(MSG_SEGV));
	}
	else if (result == ST_BUSE)
	{
		write(fd, MSG_BUSE, my_strlen(MSG_BUSE));
	}
	write(fd, "\n", 1);
}

void			append_report(t_unit_test **testlist)
{
	t_unit_test	*current;

	if (g_fd == -1)
	{
		return ;
	}
	current = *testlist;
	while (current)
	{
		write(g_fd, "	> ", 3);
		write(g_fd, current->name, my_strlen(current->name));
		write(g_fd, " : ", 3);
		print_result(g_fd, current->result);
		current = current->next;
	}
}
