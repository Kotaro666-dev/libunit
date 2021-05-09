/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 17:41:44 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/09 19:22:00 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libunit.h"

void	print_result_fd(int result, int fd)
{
	if (result == ST_OK)
	{
		my_putendl_fd(MSG_OK, fd);
	}
	else if (result == ST_KO)
	{
		my_putendl_fd(MSG_KO, fd);
	}
	else if (result == ST_SEGV)
	{
		my_putendl_fd(MSG_SEGV, fd);
	}
	else if (result == ST_BUSE)
	{
		my_putendl_fd(MSG_BUSE, fd);
	}
}

void	print_name_fd(char *name, int fd)
{
	my_putstr_fd("	> ", fd);
	my_putstr_fd(name, fd);
	my_putstr_fd(" : ", fd);
}

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

void	my_putstr_fd(char *s, int fd)
{
	int	len;

	len = my_strlen(s);
	if (len != 0)
	{
		write(fd, s, len);
	}
}

void	my_putendl_fd(char *s, int fd)
{
	int	len;

	len = my_strlen(s);
	write(fd, s, len);
	write(fd, "\n", 1);
}
