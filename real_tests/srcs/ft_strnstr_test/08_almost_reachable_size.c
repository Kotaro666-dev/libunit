/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_almost_reachable_size.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:13:12 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 16:42:31 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	almost_reachable_size(void)
{
	if (ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15) == \
		strnstr("lorem ipsum dolor sit amet", "dolor", 15))
		return (0);
	else
		return (-1);
}
