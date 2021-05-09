/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_report.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 16:48:29 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/09 17:53:08 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static void		print_result(int result)
{
	if (result == ST_OK)
	{
		my_putendl_fd(MSG_OK, g_fd);
	}
	else if (result == ST_KO)
	{
		my_putendl_fd(MSG_KO, g_fd);
	}
	else if (result == ST_SEGV)
	{
		my_putendl_fd(MSG_SEGV, g_fd);
	}
	else if (result == ST_BUSE)
	{
		my_putendl_fd(MSG_BUSE, g_fd);
	}
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
		my_putstr_fd("	> ", g_fd);
		my_putstr_fd(current->name, g_fd);
		my_putstr_fd(" : ", g_fd);
		print_result(current->result);
		current = current->next;
	}
}
