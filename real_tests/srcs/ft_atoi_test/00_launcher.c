/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:42:26 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/12 16:17:37 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int ft_atoi_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	my_putendl_fd("FT_ATOI_TEST:", STDOUT_FILENO);
	my_putendl_fd("FT_ATOI_TEST:", g_fd);
	load_test(&testlist, "Zero test", &zero_test);
	return (launch_tests(&testlist));
}
