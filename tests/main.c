/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 08:43:16 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 14:07:36 by kefujiwa         ###   ########.fr       */
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
	int status;

	status = 0;
	print_header_fd(STDOUT_FILENO);
	create_report();
	status |= strlen_launcher();
	printf("Result: %d\n", status);
	status |= ko_launcher();
	printf("Result: %d\n", status);
	status |= segv_launcher();
	printf("Result: %d\n", status);
	status |= buse_launcher();
	printf("Result: %d\n", status);
	status |= abort_launcher();
	printf("Result: %d\n", status);
	status |= fpe_launcher();
	printf("Result: %d\n", status);
	status |= alarm_launcher();
	close(g_fd);
	printf("Result: %d\n", status);
	return (status);
}
