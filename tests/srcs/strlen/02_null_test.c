/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 20:36:12 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/09 09:56:41 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../libft/includes/libft.h"
#include "../../includes/tests.h"

int null_test(void)
{
	char *str;

	str = NULL;
	if (ft_strlen(str) == strlen(str))
		return(0);
	else
		return(-1);
}
