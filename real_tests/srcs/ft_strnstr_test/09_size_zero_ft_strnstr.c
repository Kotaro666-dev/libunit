/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_size_zero_ft_strnstr.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:15:06 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 17:10:04 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	size_zero_ft_strnstr(void)
{
	const char	*str1 = "lorem ipsum dolor sit amet";
	const char	*str2 = "lorem ipsum dolor sit amet";

	if (ft_strnstr(str1, "dolor", 0) == strnstr(str2, "dolor", 0))
		return (0);
	else
		return (-1);
}
