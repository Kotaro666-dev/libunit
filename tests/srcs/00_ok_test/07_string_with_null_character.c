/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_string_with_null_character.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:06:16 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 14:59:34 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	string_with_null_character(void)
{
	const char	*str = "So far so good. \0 But you failed to stop reading.";

	if (ft_strlen(str) == strlen(str))
		return (0);
	else
		return (-1);
}
