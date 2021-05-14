/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_unreachable_size.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:11:17 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 17:09:56 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	unreacheable_size(void)
{
	const char	*str1 = "lorem ipsum dolor sit amet";
	const char	*str2 = "lorem ipsum dolor sit amet";

	if (ft_strnstr(str1, "sit", 10) == strnstr(str2, "sit", 10))
		return (0);
	else
		return (-1);
}
