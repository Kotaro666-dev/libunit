# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/08 13:01:30 by kkamashi          #+#    #+#              #
#    Updated: 2021/05/11 12:22:55 by kkamashi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### MAKEFILE ###

## Escape Sequence ##

_RESET				= \x1b[0m
_GREY				= \x1b[30m
_RED				= \x1b[31m
_GREEN				= \x1b[32m
_YELLOW				= \x1b[33m
_BLUE				= \x1b[34m
_PURPLE				= \x1b[35m
_CYAN				= \x1b[36m
_WHITE				= \x1b[37m


# **************************************************************************** #


## Compilation ##
CC					= gcc
CFLAGS				= -Wall -Wextra -Werror
AR					= ar rcs

## Delete ##
RM					= rm -rf

## Directories ##
HEADER_DIR			= includes/
SRCS_DIR			= srcs/
OBJS_DIR			= objs/
OK_DIR				= 00_ok_test/
KO_DIR				= 01_ko_test/
SEGV_DIR			= 02_segv_test/
BUSE_DIR			= 03_buse_test/
ABORT_DIR			= 04_abort_test/
FPE_DIR				= 05_fpe_test/
ALARM_DIR			= 06_alarm_test/
LIBFT_DIR			= ../libft/
LIBUNIT_DIR			= ../framework/

## Files ##
OK					= 00_launcher.c \
					  01_basic_test.c \
					  02_bigger_str_test.c \
					  03_empty_string.c \
					  04_one_character.c \
					  05_many_spaces.c \
					  06_only_null_character.c \
					  07_string_with_null_character.c \

KO					= 00_launcher.c \

SEGV				= 00_launcher.c \
					  01_null_test.c \

BUSE				= 00_launcher.c \
					  01_buse_test.c \

ABORT				= 00_launcher.c \
					  01_abort_test.c \

FPE					= 00_launcher.c \
					  01_fpe_test.c \

ALARM_DIR			= 00_launcher.c \

SRCS				= $(addprefix $(OK_DIR), $(OK)) \
					  $(addprefix $(KO_DIR), $(KO)) \
					  $(addprefix $(SEGV_DIR), $(SEGV)) \
					  $(addprefix $(BUSE_DIR), $(BUSE)) \
					  $(addprefix $(ABORT_DIR), $(ABORT)) \
					  $(addprefix $(FPE_DIR), $(FPE)) \
					  $(addprefix $(ALARM_DIR), $(ALARM)) \

## Compiled Files ##
OBJS				= $(SRCS:%.c=$(OBJS_DIR)%.o)
LIBFT_NAME			= $(LIBFT_DIR)libft.a
LIBUNIT_NAME		= $(LIBUNIT_DIR)libunit.a
NAME				= tests
REPORT_NAME			= report.txt


# **************************************************************************** #


## Rules ##

all:				$(NAME)

clean:
					@$(MAKE) clean -C $(LIBFT_DIR)
					@$(MAKE) clean -C $(LIBUNIT_DIR)
					@echo "$(_RED)Cleaning tests objects...\n$(_RESET)"
					@$(RM) $(OBJS_DIR)

fclean:
					@$(MAKE) fclean -C $(LIBFT_DIR)
					@$(MAKE) fclean -C $(LIBUNIT_DIR)
					@echo "$(_RED)Cleaning tests objects...\n$(_RESET)"
					@$(RM) $(OBJS_DIR)
					@echo "$(_RED)Deleting library '$(NAME)'...\n$(_RESET)"
					@$(RM) $(NAME)
					@echo "$(_RED)Deleting '$(REPORT_NAME)'...\n$(_RESET)"
					@$(RM) $(REPORT_NAME)

re:					fclean all

test:				all
					@./$(NAME)

$(NAME):			$(LIBFT_NAME) $(LIBUNIT_NAME) $(OBJS)
					@$(CC) $(CFLAGS) -I $(HEADER_DIR) -o $(NAME) main.c $(OBJS) $(LIBFT_NAME) $(LIBUNIT_NAME)
					@echo "\n\n$(_GREEN)Library '$(NAME)' compiled.\n$(_RESET)"

$(LIBFT_NAME):
					@$(MAKE) -C $(LIBFT_DIR)

$(LIBUNIT_NAME):
					@$(MAKE) -C $(LIBUNIT_DIR)

$(OBJS):			$(OBJS_DIR)

$(OBJS_DIR)%.o:		$(SRCS_DIR)%.c
					@printf "$(_YELLOW)Generating tests objects... %-33.33s\r$(_RESET)" $@
					@$(CC) $(CFLAGS) -I $(HEADER_DIR) -c $< -o $@

$(OBJS_DIR):
					@mkdir -p $(OBJS_DIR)
					@mkdir -p $(OBJS_DIR)$(OK_DIR)
					@mkdir -p $(OBJS_DIR)$(KO_DIR)
					@mkdir -p $(OBJS_DIR)$(SEGV_DIR)
					@mkdir -p $(OBJS_DIR)$(BUSE_DIR)
					@mkdir -p $(OBJS_DIR)$(ABORT_DIR)
					@mkdir -p $(OBJS_DIR)$(FPE_DIR)
					@mkdir -p $(OBJS_DIR)$(ALARM_DIR)

## Phony ##
.PHONY:				all clean fclean re test
