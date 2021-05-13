/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16_nan_after_space.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:18:00 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/12 17:14:37 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	nan_after_space_test(void)
{
	if (ft_atoi("\t\ng112 \n") == atoi("\t\ng112 \n"))
		return (0);
	else
		return (-1);
}
