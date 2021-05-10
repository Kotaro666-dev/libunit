/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 08:11:35 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/11 08:11:37 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int buse_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	printf("BUSE:\n");
	my_putendl_fd("BUSE:", g_fd);
	load_test(&testlist, "Bus error test", &buse_test);
	return (launch_tests(&testlist));
}
