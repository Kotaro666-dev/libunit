/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 07:53:19 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/09 08:21:19 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "framework/includes/libunit.h"

static int basic_test()
{
	return (0);
}

static int null_test()
{
	return (0);
}

static int bigger_str_test()
{
	return (0);
}

int main(void)
{
	t_unit_test *testlist;
	t_unit_test *current;

	testlist = NULL;
	printf("STRLEN:\n");
	load_test(&testlist, "Basic test", &basic_test);
	load_test(&testlist, "NULL test", &null_test);
	load_test(&testlist, "Bigger string test", &bigger_str_test);

	current = testlist;
	while (current)
	{
		printf("Name: %s\n", current->name);
		current = current->next;
	}
	return (0);
}
