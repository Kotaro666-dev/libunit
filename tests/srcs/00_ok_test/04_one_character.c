/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_one_character.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:00:00 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/11 12:06:03 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int one_character(void)
{
	if (ft_strlen("a") == strlen("a"))
		return(0);
	else
		return(-1);
}
