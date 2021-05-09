/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 12:23:27 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/09 17:37:39 by kkamashi         ###   ########.fr       */
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

/*
** BONUS PART
*/

void	append_report(t_unit_test **testlist);

#endif
