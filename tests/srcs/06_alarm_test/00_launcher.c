/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 08:10:34 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/14 23:55:53 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	alarm_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_test_fd("ALARM Tests", STDOUT_FILENO);
	print_test_fd("ALARM Tests", g_fd);
	load_test(&testlist, "TIMEOUT test", &timeout_test);
	run_tests(&testlist);
	display_results(&testlist);
	append_report(&testlist);
	return (validate_results(&testlist, ST_ALARM));
}
