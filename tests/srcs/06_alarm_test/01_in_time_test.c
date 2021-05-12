/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_in_time_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 15:03:38 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/12 15:14:28 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int in_time_test(void)
{
	sleep(1);
	if (ft_strlen("Hello") == strlen("Hello"))
		return(0);
	else
		return(-1);
}
