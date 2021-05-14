/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test01.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:42:47 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 16:41:50 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	basic_test01(void)
{
	if (ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15) == \
		strnstr("lorem ipsum dolor sit amet", "lorem", 15))
		return (0);
	else
		return (-1);
}
