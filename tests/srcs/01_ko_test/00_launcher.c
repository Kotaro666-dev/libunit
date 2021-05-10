/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 08:07:05 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/11 08:07:52 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int ko_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	printf("KO:\n");
	my_putendl_fd("KO:", g_fd);
	return (launch_tests(&testlist));
}
