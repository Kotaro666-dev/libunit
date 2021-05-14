/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_nan_charactors_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 13:39:03 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 13:39:46 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	nan_charactors_test(void)
{
	if (ft_strncmp("", "", 10) == strncmp("", "", 10))
		return (0);
	else
		return (-1);
}
