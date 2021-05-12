/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 12:57:12 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/12 15:08:48 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include "../../framework/includes/libunit.h"
# include "../../libft/includes/libft.h"

/*
** OK_TEST
*/

int		strlen_launcher(void);
int		basic_test(void);
int		bigger_str_test(void);
int		empty_string(void);
int		one_character(void);
int		many_spaces(void);
int		only_null_character(void);
int		string_with_null_character(void);

/*
** KO_TEST
*/

int		ko_launcher(void);
int		strlen_test(void);
int		strncmp_test(void);
int		strchr_test(void);
int		strrchr_test(void);

/*
** SEGV_TEST
*/

int		segv_launcher(void);
int		null_test(void);

/*
** BUSE_TEST
*/

int		buse_launcher(void);
int		buse_test(void);

/*
** ABORT_TEST
*/

int		abort_launcher(void);
int		abort_test(void);

/*
** FPE_TEST
*/

int		fpe_launcher(void);
int		fpe_test(void);

/*
** ALARM_TEST
*/

int		alarm_launcher(void);
int		in_time_test(void);
int		timeout_test(void);

#endif
