/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_buse_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 17:47:38 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/09 21:09:10 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int buse_test(void)
{
	char *str = "test";

	str[0] = 'a';
	if (ft_strlen(str) == strlen(str))
		return(0);
	else
		return(-1);
}
