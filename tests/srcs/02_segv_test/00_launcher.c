/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 08:11:25 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/14 13:45:03 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int segv_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	printf("SEGV:\n");
	my_putendl_fd("SEGV:", g_fd);
	load_test(&testlist, "NULL test", &null_test);
	run_tests(&testlist);
	display_results(&testlist);
	append_report(&testlist);
	return (validate_results(&testlist, ST_SEGV));
}
