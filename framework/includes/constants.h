/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constants.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 12:26:25 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/13 23:18:48 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONSTANTS_H
# define CONSTANTS_H

/*
** RESULT MESSAGE
*/

# define MSG_OK "[OK]"
# define MSG_KO "[KO]"
# define MSG_SEGV "[SEGV]"
# define MSG_BUSE "[BUSE]"
# define MSG_ABORT "[ABORT]"
# define MSG_FPE "[FPE]"
# define MSG_ALARM "[TIMEOUT]"

/*
** RESULT STATUS
*/

# define ST_OK 0
# define ST_KO 1
# define ST_SEGV 2
# define ST_BUSE 3
# define ST_ABORT 4
# define ST_FPE 5
# define ST_ALARM 6

/*
** BONUS PART
*/

# define FILE_PATH "report.txt"
# define TIMEOUT 5

/*
** COLOR
*/

# define RESET   "\x1b[0m"
# define BOLD    "\x1b[1m"
# define RED     "\x1b[31m"
# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define BLUE    "\x1b[34m"
# define PURPLE  "\x1b[35m"
# define CYAN    "\x1b[36m"

/*
** RETURN VALUE
*/
# define SUCCESS 0
# define FAILURE -1

/*
** ERRNO
*/
# define E_NONAME 200
# define E_NOFUNC 201

#endif
