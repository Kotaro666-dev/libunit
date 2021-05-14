/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_tests.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:16:44 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 14:52:55 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REAL_TESTS_H
# define REAL_TESTS_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include "libunit.h"
# include "libft.h"

/*
** FT_ATOI_TEST
*/

int		ft_atoi_launcher(void);
int		zero_test(void);
int		nan_in_the_middle_test(void);
int		negative_number_test(void);
int		positive_number_test(void);
int		prefix_single_zero_test(void);
int		prefix_multi_zero_test(void);
int		plus_minus_test(void);
int		minus_plus_test(void);
int		double_minus_test(void);
int		double_plus_test(void);
int		plus_in_the_middle_test(void);
int		minus_in_the_middle_test(void);
int		is_space_test(void);
int		maximum_test(void);
int		minimum_test(void);
int		nan_after_space_test(void);
int		backspace_test(void);
int		empty_string_test(void);
int		solo_minus_test(void);
int		solo_plus_test(void);

/*
** FT_STRNCMP_TEST
*/

int		ft_strncmp_launcher(void);
int		basic_test(void);
int		nan_charactors(void);
int		same_charactors_in_beggining(void);
int		bigger_size_than_charactors(void);
int		hidden_charactors(void);
int		long_string(void);
int		long_long_string(void);
int		size_zero(void);

#endif
