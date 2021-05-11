/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_only_null_character.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:21:51 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/11 12:22:24 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int only_null_character(void)
{
	if (ft_strlen("\0") == strlen("\0"))
		return(0);
	else
		return(-1);
}
