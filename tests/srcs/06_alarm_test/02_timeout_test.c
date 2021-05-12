/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_timeout_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 15:07:49 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/12 15:27:01 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int timeout_test(void)
{
	sleep(10);
	if (ft_strlen("Hello") == strlen("Hello"))
		return(0);
	else
		return(-1);
}
