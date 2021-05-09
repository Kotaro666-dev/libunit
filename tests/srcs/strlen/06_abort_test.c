/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_abort_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 21:15:24 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/09 21:23:13 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	abort_test(void)
{
	char	*str;

	str = ft_strjoin("aaa", "bbb");
	free(str);
	free(str);
	if (strcmp(str, "aaabbb") == 0)
		return (0);
	else
		return (-1);
}
