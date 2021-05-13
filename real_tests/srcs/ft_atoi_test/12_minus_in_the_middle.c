/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_minus_in_the_middle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:18:00 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/12 17:11:04 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	minus_in_the_middle_test(void)
{
	if (ft_atoi("-12-76") == atoi("-12-76"))
		return (0);
	else
		return (-1);
}
