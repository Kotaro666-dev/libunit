/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14_maximum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:18:00 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/12 17:12:57 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	maximum_test(void)
{
	if (ft_atoi("2147483647") == atoi("2147483647"))
		return (0);
	else
		return (-1);
}
