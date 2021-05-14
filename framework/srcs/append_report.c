/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_report.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 16:48:29 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 23:24:06 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	append_report(t_unit_test **testlist)
{
	t_unit_test	*current;
	int			total;
	int			ok;

	if (g_fd == -1)
	{
		return ;
	}
	current = *testlist;
	total = 0;
	ok = 0;
	while (current)
	{
		print_result_fd(current->result, g_fd);
		my_putstr_fd("\t\t", g_fd);
		my_putendl_color_fd(current->name, CYAN, g_fd);
		if (current->result == 0)
			ok++;
		total++;
		current = current->next;
	}
	print_total_fd(ok, total, g_fd);
}
