/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_report.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 16:48:29 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/09 19:22:12 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

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
		print_name_fd(current->name, g_fd);
		print_result_fd(current->result, g_fd);
		current = current->next;
	}
}
