/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_nonexistent_needle.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:09:46 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 17:09:49 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	nonexistent_needle(void)
{
	const char	*str1 = "lorem ipsum dolor sit amet";
	const char	*str2 = "lorem ipsum dolor sit amet";

	if (ft_strnstr(str1, "ipsumm", 30) == strnstr(str2, "ipsumm", 30))
		return (0);
	else
		return (-1);
}
