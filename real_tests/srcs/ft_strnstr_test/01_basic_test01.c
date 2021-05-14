/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test01.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:42:47 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 17:09:17 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	basic_test01(void)
{
	const char	*str1 = "lorem ipsum dolor sit amet";
	const char	*str2 = "lorem ipsum dolor sit amet";

	if (ft_strnstr(str1, "lorem", 15) == strnstr(str2, "lorem", 15))
		return (0);
	else
		return (-1);
}
