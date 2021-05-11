/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_strrchr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 13:29:06 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/11 13:29:40 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int strrchr_test(void)
{
	char *str1 = "ABC\0DEF";
	char *str2 = "ABCDEF";

	if (ft_strrchr(str1, 'C') == strrchr(str2, 'C'))
		return(0);
	else
		return(-1);
}
