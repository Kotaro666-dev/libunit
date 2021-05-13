/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 16:42:20 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/13 19:52:55 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>

static int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r');
}

static int	calc_atoi(const char *str, int sign)
{
	unsigned long	num;
	unsigned long	max;
	int				digit;

	num = 0;
	max = LLONG_MAX;
	digit = (sign == 1 ? 7 : 8);
	while (ft_isdigit(*str))
	{
		if (num < max / 10 || (num == max / 10 && *str - '0' <= digit))
			num = num * 10 + (*str - '0');
		else
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
		str++;
	}
	return ((int)num * sign);
}

int			ft_atoi(const char *str)
{
	int	sign;

	sign = 1;
	while (is_space(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		sign = (*str == '+' ? 1 : -1);
		str++;
	}
	return (calc_atoi(str, sign));
}
