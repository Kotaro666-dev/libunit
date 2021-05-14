/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_null_charactor_needle.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:07:23 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 16:42:12 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	null_charactor_needle(void)
{
	if (ft_strnstr("lorem ipsum dolor sit amet", "", 10) == \
		strnstr("lorem ipsum dolor sit amet", "", 10))
		return (0);
	else
		return (-1);
}
