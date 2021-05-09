/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 20:34:21 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/09 09:52:34 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../framework/includes/libunit.h"
#include "../../includes/tests.h"

int strlen_launcher(void)
{
	t_unit_test *testlist;
	t_unit_test *current;

	testlist = NULL;
	printf("STRLEN:\n");
	load_test(&testlist, "Basic test", &basic_test);
	// load_test(&testlist, "NULL test", &null_test);
	// load_test(&testlist, "Bigger string test", &bigger_str_test);

	current = testlist;
	while (current)
	{
		printf("Name: %s\n", current->name);
		current = current->next;
	}
	return (0);
}
