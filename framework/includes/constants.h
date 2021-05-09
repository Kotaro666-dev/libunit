/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constants.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 12:26:25 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/09 20:55:00 by kefujiwa         ###   ########.fr       */
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

/*
** RESULT STATUS
*/

# define ST_OK 0
# define ST_KO 1
# define ST_SEGV 2
# define ST_BUSE 3
# define ST_ABORT 4
# define ST_FPE 5

/*
** BONUS PART
*/

# define FILE_PATH "report.txt"

#endif
