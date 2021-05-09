/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 08:43:16 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/09 17:29:20 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "includes/tests.h"

static void		print_header()
{
	printf("*********************************\n");
	printf("** 42 - Unit Tests ****\n");
	printf("*********************************\n");
}

static void		create_report()
{
	g_fd = open(FILE_PATH, O_CREAT | O_WRONLY, S_IRWXU);
	if (g_fd == -1)
	{
		return ;
	}
	ft_putendl_fd("*********************************", g_fd);
	ft_putendl_fd("** 42 - Unit Tests ****", g_fd);
	ft_putendl_fd("*********************************", g_fd);
}

int				main(void)
{
	print_header();
	create_report();
	strlen_launcher();
	close(g_fd);
	return (0);
}
