/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 17:41:44 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/09 17:45:38 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libunit.h"

int		my_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

void	my_putendl_fd(char *s, int fd)
{
	int	len;

	len = my_strlen(s);
	write(fd, s, len);
	write(fd, "\n", 1);
}
