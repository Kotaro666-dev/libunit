/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_zero_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:51:25 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 14:52:47 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	size_zero(void)
{
	if (ft_strncmp("ABCDEFGH", "", 0) == strncmp("ABCDEFGH", "", 0))
		return (0);
	else
		return (-1);
}
