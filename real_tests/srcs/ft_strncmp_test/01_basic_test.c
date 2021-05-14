/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 13:21:38 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 13:35:47 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	basic_test(void)
{
	if (ft_strncmp("Hello World", "Hello World", strlen("Hello World")) ==
		strncmp("Hello World", "Hello World", strlen("Hello World")))
		return (0);
	else
		return (-1);
}
