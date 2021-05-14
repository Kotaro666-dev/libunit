/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:27:55 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 16:49:24 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

static void	load_testlist1(t_unit_test **testlist)
{
	load_test(testlist, \
		"ft_strnstr(\"lorem ipsum dolor sit amet\", \"lorem\", 15)", \
		&basic_test01);
	load_test(testlist, \
		"ft_strnstr(\"lorem ipsum dolor sit amet\", \"ipsum\", 15)", \
		&basic_test02);
	load_test(testlist, \
		"ft_strnstr(\"lorem ipsum dolor sit ipsum dolor\", \"ipsum\", 35)", \
		&basic_test03);
	load_test(testlist, \
		"ft_strnstr(\"lorem ipsum dolor sit amet\", \"\", 10)", \
		&null_charactor_needle);
}

static void	load_testlist2(t_unit_test **testlist)
{
	load_test(testlist, \
		"ft_strnstr(\"lorem ipsum dolor sit amet\", \"ipsumm\", 30)", \
		&nonexistent_needle);
	load_test(testlist, \
		"ft_strnstr(\"lorem ipsum dolor sit amet\", \"dol\", 30)", \
		&half_word_needle);
	load_test(testlist, \
		"ft_strnstr(\"lorem ipsum dolor sit amet\", \"sit\", 10)", \
		&unreacheable_size);
	load_test(testlist, \
		"ft_strnstr(\"lorem ipsum dolor sit amet\", \"dolor\", 15)", \
		&almost_reachable_size);
	load_test(testlist, \
		"ft_strnstr(\"lorem ipsum dolor sit amet\", \"dolor\", 0)", \
		&size_zero_ft_strnstr);
}

int	ft_strnstr_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	my_putendl_fd("FT_STRNSTR_TEST:", STDOUT_FILENO);
	my_putendl_fd("FT_STRNSTR_TEST:", g_fd);
	load_testlist1(&testlist);
	load_testlist2(&testlist);
	run_tests(&testlist);
	display_results(&testlist);
	append_report(&testlist);
	return (validate_results(&testlist, ST_OK));
}
