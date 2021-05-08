/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 12:23:27 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/08 20:12:06 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <unistd.h>
# include <stdio.h>
# include <sys/wait.h>
# include <signal.h>

typedef struct	s_unit_test
{
	char				*name;
	int					(*function)(void);
	int					result;
	struct s_unit_test	*next;
}				t_unit_test;

#endif
