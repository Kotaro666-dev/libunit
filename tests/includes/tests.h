/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 12:57:12 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/09 21:17:30 by kefujiwa         ###   ########.fr       */
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
** TEST WITH STRLEN
*/

int		strlen_launcher(void);
int		basic_test(void);
int		null_test(void);
int		bigger_str_test(void);
int		buse_test(void);
int		fpe_test(void);
int		abort_test(void);

#endif
