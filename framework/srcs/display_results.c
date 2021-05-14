/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_results.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 12:04:19 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 14:41:46 by kefujiwa         ###   ########.fr       */
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
		print_name_fd(current->name, STDOUT_FILENO);
		print_result_fd(current->result, STDOUT_FILENO);
		if (current->result == 0)
		{
			ok++;
		}
		total++;
		current = current->next;
	}
	printf("\n%d/%d tests checked\n", ok, total);
}
