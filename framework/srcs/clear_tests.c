/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_tests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 16:31:54 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/09 16:39:08 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	clear_tests(t_unit_test **testlist)
{
	t_unit_test	*current;
	t_unit_test	*next;

	current = *testlist;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*testlist = NULL;
}
