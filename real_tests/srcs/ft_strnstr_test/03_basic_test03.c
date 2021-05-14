/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic_test03.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:04:42 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 17:09:38 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	basic_test03(void)
{
	const char	*str1 = "lorem ipsum dolor sit ipsum dolor";
	const char	*str2 = "lorem ipsum dolor sit ipsum dolor";

	if (ft_strnstr(str1, "ipsum", 35) == strnstr(str2, "ipsum", 35))
		return (0);
	else
		return (-1);
}
