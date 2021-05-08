/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 12:23:27 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/09 07:51:46 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <signal.h>

typedef struct	s_unit_test
{
	char				*name;
	int					(*func)(void);
	int					result;
	struct s_unit_test	*next;
}				t_unit_test;

void	load_test(t_unit_test **list, char *name, int(*func)(void));

#endif
