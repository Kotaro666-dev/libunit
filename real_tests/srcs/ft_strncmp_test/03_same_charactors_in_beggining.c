/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_same_charactors_in_beggining.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 13:43:03 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 13:44:05 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	same_charactors_in_beggining(void)
{
	if (ft_strncmp("AAABBB", "AAACCC", 3) == strncmp("AAABBB", "AAACCC", 3))
		return (0);
	else
		return (-1);
}
