/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_double_plus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:18:00 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/12 17:09:42 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	double_plus_test(void)
{
	if (ft_atoi("++779") == atoi("++779"))
		return (0);
	else
		return (-1);
}
