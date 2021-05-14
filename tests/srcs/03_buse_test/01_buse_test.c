/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_buse_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 17:47:38 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/14 15:32:39 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include <sys/mman.h>

int	buse_test(void)
{
	FILE	*f;
	int		*m;

	f = tmpfile();
	m = (int *)mmap(0, 4, PROT_WRITE, MAP_PRIVATE, fileno(f), 0);
	*m = 0;
	return (0);
}
