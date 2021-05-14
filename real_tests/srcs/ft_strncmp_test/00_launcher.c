/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 13:18:02 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 14:41:16 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int ft_strncmp_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	my_putendl_fd("FT_STRNCMP_TEST:", STDOUT_FILENO);
	my_putendl_fd("FT_STRNCMP_TEST:", g_fd);
	load_test(&testlist, "ft_strncmp(\"Hello World\", \"Hello World\", strlen(\"Hello World\")", &basic_test);
	load_test(&testlist, "ft_strncmp(\"\", \"\", 10)", &nan_charactors_test);
	load_test(&testlist, "ft_strncmp(\"AAABBB\", \"AAACCC\", 3)", &same_charactors_in_beggining);
	load_test(&testlist, "ft_strncmp(\"ABCDE\", \"ABCDE\", 100)", &bigger_size_than_charactors);
	load_test(&testlist, "ft_strncmp(\"ABCDE\", \"ABCDE NUL HIDDEN\", 100)", &hidden_charactors);
	load_test(&testlist, "ft_strncmp(\"LONG_STRING\", \"LONG_STRING\", 100)", &long_string);
	run_tests(&testlist);
	display_results(&testlist);
	append_report(&testlist);
	return (validate_results(&testlist, ST_OK));
}
