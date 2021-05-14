/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_libft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 17:41:44 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 14:47:25 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int	my_strlen(char *str)
{
	int	len;

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

size_t	my_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*p_src;

	p_src = (char *)src;
	if (dstsize != 0)
	{
		while (dstsize - 1 && *src)
		{
			*dst = *src;
			dst++;
			src++;
			dstsize--;
		}
		*dst = '\0';
	}
	return (my_strlen(p_src));
}

void	*my_calloc(size_t count, size_t size)
{
	size_t	nbytes;
	void	*p;

	nbytes = count * size;
	p = malloc(nbytes);
	if (!p)
		return (NULL);
	while (nbytes--)
	{
		*(char *)p = 0;
		p++;
	}
	return (p);
}
