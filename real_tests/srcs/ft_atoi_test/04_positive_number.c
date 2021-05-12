/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_positive_number.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:18:00 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/12 17:06:54 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	positive_number_test(void)
{
	if (ft_atoi("+289") == atoi("+289"))
		return (0);
	else
		return (-1);
}
