/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 12:23:27 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/09 19:22:31 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <signal.h>
# include "constants.h"

/*
** BONUS_PART
*/

# include <fcntl.h>

typedef struct	s_unit_test
{
	char				*name;
	int					(*func)(void);
	int					result;
	struct s_unit_test	*next;
}				t_unit_test;

int		g_fd;

/*
** MANDATORY PART
*/

int		launch_tests(t_unit_test **testlist);
void	load_test(t_unit_test **list, char *name, int(*func)(void));
void	display_results(t_unit_test **testlist);
void	clear_tests(t_unit_test **testlist);
void	print_name_fd(char *name, int fd);
void	print_result_fd(int result, int fd);

/*
** BONUS PART
*/

void	append_report(t_unit_test **testlist);
int		my_strlen(char *str);
void	my_putstr_fd(char *s, int fd);
void	my_putendl_fd(char *s, int fd);

#endif
