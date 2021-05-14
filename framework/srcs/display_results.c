/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_results.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 12:04:19 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 23:23:54 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	display_results(t_unit_test **testlist)
{
	t_unit_test	*current;
	int			total;
	int			ok;

	current = *testlist;
	total = 0;
	ok = 0;
	while (current)
	{
		print_result_fd(current->result, STDOUT_FILENO);
		my_putstr_fd("\t\t", STDOUT_FILENO);
		my_putendl_color_fd(current->name, CYAN, STDOUT_FILENO);
		if (current->result == 0)
			ok++;
		total++;
		current = current->next;
	}
	print_total_fd(ok, total, STDOUT_FILENO);
}
