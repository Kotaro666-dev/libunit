/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 08:07:05 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/14 23:19:30 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	ko_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_test_fd("KO Tests", STDOUT_FILENO);
	print_test_fd("KO Tests", g_fd);
	load_test(&testlist, "STRLEN test", &strlen_test);
	load_test(&testlist, "STRNCMP test", &strncmp_test);
	load_test(&testlist, "STRCHR test", &strchr_test);
	load_test(&testlist, "STRRCHR test", &strrchr_test);
	run_tests(&testlist);
	display_results(&testlist);
	append_report(&testlist);
	return (validate_results(&testlist, ST_KO));
}
