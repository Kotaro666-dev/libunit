/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 07:53:19 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/09 10:01:47 by kefujiwa         ###   ########.fr       */
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

static int ko_test()
{
	return (-1);
}

static int segv_test()
{
	char *p;

	p = NULL;
	while (*p)
		p++;
	return (-1);
}

int main(void)
{
	t_unit_test *testlist;
	t_unit_test *current;
	int			result;

	testlist = NULL;
//	printf("STRLEN:\n");
	load_test(&testlist, "Basic test", &basic_test);
	load_test(&testlist, "NULL test", &null_test);
	load_test(&testlist, "Bigger string test", &bigger_str_test);
	load_test(&testlist, "KO_test", &ko_test);
	load_test(&testlist, "SEGV_test", &segv_test);
	result = launch_tests(&testlist);

	current = testlist;
	printf("--CHECK RESULT--\n");
	printf("Result of launch_tests: %d\n", result);
	printf("--------------\n");
	while (current)
	{
		printf("Name: %s\n", current->name);
		if (current->result == 0)
			printf("Test result: %s\n", "OK");
		else if (current->result == 1)
			printf("Test result: %s\n", "KO");
		else if (current->result == 2)
			printf("Test result: %s\n", "SEGV");
		else if (current->result == 3)
			printf("Test result: %s\n", "BUSE");
		printf("--------------\n");
		current = current->next;
	}
	return (0);
}
