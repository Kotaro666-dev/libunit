/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 07:48:29 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 14:46:45 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static t_unit_test	*create_new_node(char *name, int(*func)(void))
{
	t_unit_test	*new;

	new = (t_unit_test *)malloc(sizeof(t_unit_test));
	if (!new)
	{
		return (NULL);
	}
	new->name = name;
	new->func = func;
	new->next = NULL;
	return (new);
}

void 	load_test(t_unit_test **list, char *name, int(*func)(void))
{
	t_unit_test	*current;

	if (*list == NULL)
	{
		*list = create_new_node(name, func);
		return ;
	}
	current = *list;
	while (current->next)
	{
		current = current->next;
	}
	current->next = create_new_node(name, func);
}
