/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:21:04 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/05/12 16:21:45 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "real_tests.h"

static void		print_header_fd(int fd)
{
	my_putendl_fd("*********************************", fd);
	my_putendl_fd("******** 42 - Unit Tests ********", fd);
	my_putendl_fd("********      TESTS      ********", fd);
	my_putendl_fd("*********************************", fd);
}

static void		create_report()
{
	g_fd = open(FILE_PATH, O_CREAT | O_WRONLY, S_IRWXU);
	if (g_fd == -1)
	{
		return ;
	}
	print_header_fd(g_fd);
}

int				main(void)
{
	print_header_fd(STDOUT_FILENO);
	create_report();
	ft_atoi_launcher();
	zero_test();
	close(g_fd);
	return (0);
}
