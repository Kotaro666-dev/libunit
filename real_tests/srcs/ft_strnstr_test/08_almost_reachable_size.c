/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_almost_reachable_size.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:13:12 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 17:10:01 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	almost_reachable_size(void)
{
	const char	*str1 = "lorem ipsum dolor sit amet";
	const char	*str2 = "lorem ipsum dolor sit amet";

	if (ft_strnstr(str1, "dolor", 15) == strnstr(str2, "dolor", 15))
		return (0);
	else
		return (-1);
}
