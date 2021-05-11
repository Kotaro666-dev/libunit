/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 08:07:05 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/11 13:52:43 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int ko_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	my_putendl_fd("KO_TEST:", STDOUT_FILENO);
	my_putendl_fd("KO_TEST:", g_fd);
	load_test(&testlist, "STRLEN test", &strlen_test);
	load_test(&testlist, "STRNCMP test", &strncmp_test);
	load_test(&testlist, "STRCHR test", &strchr_test);
	load_test(&testlist, "STRRCHR test", &strrchr_test);
	return (launch_tests(&testlist));
}
