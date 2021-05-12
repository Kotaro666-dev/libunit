/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_prefix_single_zero.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:18:00 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/12 17:07:23 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	prefix_single_zero_test(void)
{
	if (ft_atoi("077") == atoi("077"))
		return (0);
	else
		return (-1);
}
