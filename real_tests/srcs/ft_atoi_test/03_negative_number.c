/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_negative_number.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:18:00 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/12 16:46:05 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	negative_number_test(void)
{
	if (ft_atoi("-9667") == atoi("-9667"))
		return (0);
	else
		return (-1);
}
