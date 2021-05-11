/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_many_spaces.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:00:44 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/11 12:06:09 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int many_spaces(void)
{
	char *str = " \t\n\v\f\r\n\v\f \t\t\v\v\v\r\n";

	if (ft_strlen(str) == strlen(str))
		return(0);
	else
		return(-1);
}
