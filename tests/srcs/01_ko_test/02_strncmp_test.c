/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strncmp_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 13:05:45 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 15:01:40 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	strncmp_test(void)
{
	const char	*str1 = "ABCDE";
	const char	*str3 = "ABcDE";
	const char	*str2 = "ABCDE";

	if (ft_strncmp(str1, str2, 4) == strncmp(str1, str3, 4))
		return (0);
	else
		return (-1);
}
