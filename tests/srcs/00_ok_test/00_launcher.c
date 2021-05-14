/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 20:34:21 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 22:44:18 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	strlen_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_test_fd("OK Tests", STDOUT_FILENO);
	print_test_fd("OK Tests", g_fd);
	load_test(&testlist, "Basic test", &basic_test);
	load_test(&testlist, "Bigger string test", &bigger_str_test);
	load_test(&testlist, "Empty string test", &empty_string);
	load_test(&testlist, "One character test", &one_character);
	load_test(&testlist, "Many spaces test", &many_spaces);
	load_test(&testlist, "Only null character test", &many_spaces);
	load_test(&testlist, "String with null character test",
		 &string_with_null_character);
	run_tests(&testlist);
	display_results(&testlist);
	append_report(&testlist);
	return (validate_results(&testlist, ST_OK));
}
