/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_bigger_size_than_charactors.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 13:46:27 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 13:47:04 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	bigger_size_than_charactors(void)
{
	if (ft_strncmp("ABCDE", "ABCDE", 100) == strncmp("ABCDE", "ABCDE", 100))
		return (0);
	else
		return (-1);
}
