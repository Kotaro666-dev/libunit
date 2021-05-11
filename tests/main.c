/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 08:43:16 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/11 12:16:46 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "tests.h"

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
	strlen_launcher();
	segv_launcher();
	buse_launcher();
	abort_launcher();
	fpe_launcher();
	close(g_fd);
	return (0);
}
