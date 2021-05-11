/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 08:10:07 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/11 08:10:25 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int fpe_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	printf("FPE:\n");
	my_putendl_fd("FPE:", g_fd);
	load_test(&testlist, "FPE test", &fpe_test);
	return (launch_tests(&testlist));
}
