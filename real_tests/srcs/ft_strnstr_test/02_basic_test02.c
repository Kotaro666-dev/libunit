/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test02.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:55:40 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 16:42:00 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	basic_test02(void)
{
	if (ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15) == \
		strnstr("lorem ipsum dolor sit amet", "ipsum", 15))
		return (0);
	else
		return (-1);
}
