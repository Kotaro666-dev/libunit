/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic_test03.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:04:42 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 16:42:06 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	basic_test03(void)
{
	if (ft_strnstr("lorem ipsum dolor sit ipsum dolor", "ipsum", 35) == \
		strnstr("lorem ipsum dolor sit ipsum dolor", "ipsum", 35))
		return (0);
	else
		return (-1);
}
