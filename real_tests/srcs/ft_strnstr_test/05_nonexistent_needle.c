/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_nonexistent_needle.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:09:46 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 16:42:17 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	nonexistent_needle(void)
{
	if (ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30) == \
		strnstr("lorem ipsum dolor sit amet", "ipsumm", 30))
		return (0);
	else
		return (-1);
}
