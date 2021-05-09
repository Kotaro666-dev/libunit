/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_bigger_str_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 20:36:51 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/09 09:56:33 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../libft/includes/libft.h"
#include "../../includes/tests.h"

static char	*generate_bigger_str(void)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(char) * (100000000 + 1));
	if (!str)
	{
		return (NULL);
	}
	i = 0;
	while (i < 100000000)
	{
		str[i] = 'a';
		i++;
	}
	str[i] = '\0';
	return (str);
}

int			bigger_str_test(void)
{
	char *str;

	str = generate_bigger_str();
	if (!str)
	{
		return (-1);
	}
	if (ft_strlen(str) == strlen(str))
		return(0);
	else
		return(-1);
}
