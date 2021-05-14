/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_null_charactor_needle.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:07:23 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 17:09:43 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	null_charactor_needle(void)
{
	const char	*str1 = "lorem ipsum dolor sit amet";
	const char	*str2 = "lorem ipsum dolor sit amet";

	if (ft_strnstr(str1, "", 10) == strnstr(str2, "", 10))
		return (0);
	else
		return (-1);
}
