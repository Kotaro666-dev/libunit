/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_libft2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:10:23 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/14 23:50:21 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	my_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	my_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		my_putchar_fd('-', fd);
		if (n <= -10)
			my_putnbr_fd((n / 10) * -1, fd);
		my_putchar_fd("0123456789"[n % 10 * -1], fd);
	}
	else
	{
		if (n >= 10)
			my_putnbr_fd(n / 10, fd);
		my_putchar_fd("0123456789"[n % 10], fd);
	}
}
