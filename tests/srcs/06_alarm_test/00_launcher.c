/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 08:10:34 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/12 15:12:33 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int alarm_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	printf("ALARM:\n");
	my_putendl_fd("ALARM:", g_fd);
	load_test(&testlist, "IN TIME test", &in_time_test);
	load_test(&testlist, "TIMEOUT test", &timeout_test);
	return (launch_tests(&testlist));
}
