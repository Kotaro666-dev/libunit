/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_size_zero_ft_strnstr.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:15:06 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 16:42:36 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	size_zero_ft_strnstr(void)
{
	if (ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0) == \
		strnstr("lorem ipsum dolor sit amet", "dolor", 0))
		return (0);
	else
		return (-1);
}
