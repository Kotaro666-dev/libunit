/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_hidden_charactors.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 13:48:40 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 13:49:24 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	hidden_charactors(void)
{
	if (ft_strncmp("ABCDE", "ABCDE\0HIDDEN", 100) == strncmp("ABCDE", "ABCDE\0HIDDEN", 100))
		return (0);
	else
		return (-1);
}
