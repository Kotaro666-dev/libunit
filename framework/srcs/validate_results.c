/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_results.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 13:36:51 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/14 13:38:40 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int validate_results(t_unit_test **testlist, int st)
{
	int			status;
	t_unit_test	*current;

	status = SUCCESS;
	current = *testlist;
	while (current)
	{
		if (current->result != st)
			status = FAILURE;
		current = current->next;
	}
	clear_tests(testlist);
	return (status);
}
