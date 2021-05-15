/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:42:26 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/15 18:38:05 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

static void	load_testlist(t_unit_test **testlist)
{
	load_test(testlist, "ft_atoi(\"0\")", &zero_test);
	load_test(testlist, "ft_atoi(\"546:5\")", &nan_in_the_middle_test);
	load_test(testlist, "ft_atoi(\"-9667\")", &negative_number_test);
	load_test(testlist, "ft_atoi(\"+289\")", &positive_number_test);
	load_test(testlist, "ft_atoi(\"077\")", &prefix_single_zero_test);
	load_test(testlist, "ft_atoi(\"0002543\")", &prefix_multi_zero_test);
	load_test(testlist, "ft_atoi(\"+-112\")", &plus_minus_test);
	load_test(testlist, "ft_atoi(\"-+258\")", &minus_plus_test);
	load_test(testlist, "ft_atoi(\"--19\")", &double_minus_test);
	load_test(testlist, "ft_atoi(\"++779\")", &double_plus_test);
	load_test(testlist, "ft_atoi(\"+87+11\")", &plus_in_the_middle_test);
	load_test(testlist, "ft_atoi(\"-12-76\")", &minus_in_the_middle_test);
	load_test(testlist, "ft_atoi(\"\\t\\n\\r\\v\\f  5342 \\n\")",
		&is_space_test);
	load_test(testlist, "ft_atoi(\"2147483647\")", &maximum_test);
	load_test(testlist, "ft_atoi(\"-2147483648\")", &minimum_test);
	load_test(testlist, "ft_atoi(\"\\t\\ng112 \\n\")", &nan_after_space_test);
	load_test(testlist, "ft_atoi(\"\\n\\n  -77\\b9 5g\")", &backspace_test);
	load_test(testlist, "ft_atoi(\"\")", &empty_string_test);
	load_test(testlist, "ft_atoi(\"-\")", &solo_minus_test);
	load_test(testlist, "ft_atoi(\"+\")", &solo_plus_test);
}

int	ft_atoi_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_test_fd("FT_ATOI Tests", STDOUT_FILENO);
	print_test_fd("FT_ATOI Tests", g_fd);
	load_testlist(&testlist);
	run_tests(&testlist);
	display_results(&testlist);
	append_report(&testlist);
	return (validate_results(&testlist, ST_OK));
}
