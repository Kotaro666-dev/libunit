/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_strrchr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 13:29:06 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 15:02:25 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	strrchr_test(void)
{
	const char	*str1 = "ABC\0DEF";
	const char	*str2 = "ABCDEF";

	if (ft_strrchr(str1, 'C') == strrchr(str2, 'C'))
		return (0);
	else
		return (-1);
}
