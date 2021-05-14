/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_unreachable_size.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:11:17 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 16:42:27 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	unreacheable_size(void)
{
	if (ft_strnstr("lorem ipsum dolor sit amet", "sit", 10) == \
		strnstr("lorem ipsum dolor sit amet", "sit", 10))
		return (0);
	else
		return (-1);
}
