/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 20:35:27 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/09 11:53:01 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int basic_test(void)
{
	if (ft_strlen("Hello") == strlen("Hello"))
		return(0);
	else
		return(-1);
}
