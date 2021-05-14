/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_long_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 13:56:19 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 16:55:41 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	long_string(void)
{
	const char	*str1 = "UrZ1Sf1YVg6j2gFgeL5vqeM0sybEP2t9koEUFjihUGvZZie \
		3qRmGdF3TbsNJN69KaC0jZ35iIXylryOeJIBEdaoj4bKs7SodcOAK";
	const char	*str2 = "UrZ1Sf1YVg6j2gFgeL5vqeM0sybEP2t9koEUFjihUGvZZie \
		3qRmGdF3TbsNJN69KaC0jZ35iIXylryOeJIBEdaoj4bKs7SodcOAK";

	if (ft_strncmp(str1, str2, 100) == strncmp(str1, str2, 100))
		return (0);
	else
		return (-1);
}
