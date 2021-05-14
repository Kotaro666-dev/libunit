/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 08:09:15 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/14 23:20:35 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	abort_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_test_fd("ABORT Tests", STDOUT_FILENO);
	print_test_fd("ABORT Tests", g_fd);
	load_test(&testlist, "Abort test", &abort_test);
	run_tests(&testlist);
	display_results(&testlist);
	append_report(&testlist);
	return (validate_results(&testlist, ST_ABORT));
}
