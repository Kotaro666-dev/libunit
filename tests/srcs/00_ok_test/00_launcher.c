/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 20:34:21 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 14:53:58 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	strlen_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	my_putendl_fd("OK_TEST:", STDOUT_FILENO);
	my_putendl_fd("OK_TEST:", g_fd);
	load_test(&testlist, "Basic test", &basic_test);
	load_test(&testlist, "Bigger string test", &bigger_str_test);
	load_test(&testlist, "Empty string test", &empty_string);
	load_test(&testlist, "One character test", &one_character);
	load_test(&testlist, "Many spaces test", &many_spaces);
	load_test(&testlist, "Only null character test", &many_spaces);
	load_test(&testlist, "String with null character test",
		&string_with_null_character);
	return (launch_tests(&testlist));
}
