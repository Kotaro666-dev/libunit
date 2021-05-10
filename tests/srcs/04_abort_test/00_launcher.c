/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 08:09:15 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/11 08:09:51 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int abort_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	printf("ABORT:\n");
	my_putendl_fd("ABORT:", g_fd);
	load_test(&testlist, "Abort test", &abort_test);
	return (launch_tests(&testlist));
}
