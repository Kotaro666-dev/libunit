/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 13:10:01 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/11 13:25:17 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int strchr_test(void)
{
	char *str1 = "ABC\0DEF";
	char *str2 = "ABCDEF";

	if (ft_strchr(str1, 'D') == strchr(str2, 'D'))
		return(0);
	else
		return(-1);
}
