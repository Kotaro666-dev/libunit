/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_perror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 22:35:27 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/13 23:35:50 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static char	*ft_strerror(void)
{
	char *str;

	if (!(str = my_calloc(100, sizeof(char*))))
		my_strlcpy(str, "malloc failed", 100);
	if (errno == EAGAIN)
		my_strlcpy(str, "Try Again", 100);
	else if (errno == ENOMEM)
		my_strlcpy(str, "Out of memory", 100);
	else if (errno == ENOSYS)
		my_strlcpy(str, "Function not implemented", 100);
	else if (errno == E_NONAME)
		my_strlcpy(str, "Name is missing", 100);
	else if (errno == E_NOFUNC)
		my_strlcpy(str, "Function is missing", 100);
	else
		my_strlcpy(str, "undefined error", 100);
	return (str);
}

static void	ft_perror(char *s)
{
	char	*err_msg;

	my_putstr_fd(RED, STDERR_FILENO);
	my_putstr_fd(s, STDERR_FILENO);
	my_putstr_fd(": ", STDERR_FILENO);
	my_putstr_fd((err_msg = ft_strerror()), STDERR_FILENO);
	if (err_msg)
		free(err_msg);
	my_putstr_fd("\n", STDERR_FILENO);
	my_putstr_fd(RESET, STDERR_FILENO);
}

void		exit_perror(char *str_msg, int exit_status)
{
	ft_perror(str_msg);
	exit(exit_status);
}
