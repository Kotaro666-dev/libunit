/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 20:36:12 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/09 11:53:04 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int null_test(void)
{
	char *str;

	str = NULL;
	if (ft_strlen(str) == strlen(str))
		return(0);
	else
		return(-1);
}
