/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 20:34:21 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/09 21:18:05 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int strlen_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	printf("STRLEN:\n");
	my_putendl_fd("STRLEN:", g_fd);
	load_test(&testlist, "Basic test", &basic_test);
	load_test(&testlist, "NULL test", &null_test);
	load_test(&testlist, "Bigger string test", &bigger_str_test);
	load_test(&testlist, "Bus error test", &buse_test);
	load_test(&testlist, "FPE test", &fpe_test);
	load_test(&testlist, "Abort test", &abort_test);
	return (launch_tests(&testlist));
}
