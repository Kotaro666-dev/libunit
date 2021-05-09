/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_results.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 12:04:19 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/09 15:58:58 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static void		print_result(int result)
{
	if (result == ST_OK)
	{
		printf(MSG_OK);
	}
	else if (result == ST_KO)
	{
		printf(MSG_KO);
	}
	else if (result == ST_SEGV)
	{
		printf(MSG_SEGV);
	}
	else if (result == ST_BUSE)
	{
		printf(MSG_BUSE);
	}
	printf("\n");
}

void			display_results(t_unit_test **testlist)
{
	t_unit_test	*current;
	int			total;
	int			ok;

	current = *testlist;
	total = 0;
	ok = 0;
	while (current)
	{
		printf("	> %s : ", current->name);
		print_result(current->result);
		if (current->result == 0)
		{
			ok++;
		}
		total++;
		current = current->next;
	}
	printf("\n%d/%d tests checked\n", ok, total);
}
