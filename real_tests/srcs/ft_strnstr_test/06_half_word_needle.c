/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_half_word_needle.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:10:18 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 16:42:22 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	half_word_needle(void)
{
	if (ft_strnstr("lorem ipsum dolor sit amet", "dol", 30) == \
		strnstr("lorem ipsum dolor sit amet", "dol", 30))
		return (0);
	else
		return (-1);
}
