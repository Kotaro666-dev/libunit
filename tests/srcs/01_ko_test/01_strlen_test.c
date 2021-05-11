/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strlen_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:43:48 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/11 12:59:52 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int strlen_test(void)
{
	char *str1 = "Hello World\0!";
	char *str2 = "Hello World!";

	if (ft_strlen(str1) == strlen(str2))
		return(0);
	else
		return(-1);
}
