# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/08 16:17:29 by kkamashi          #+#    #+#              #
#    Updated: 2021/05/14 14:54:19 by kkamashi         ###   ########.fr        #
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
ATOI_DIR			= ft_atoi_test/
STRNCMP_DIR			= ft_strncmp_test/
LIBFT_DIR			= ../libft/
LIBUNIT_DIR			= ../framework/

## Files ##
ATOI				= 00_launcher.c \
					  01_zero.c \
					  02_nan_in_the_middle.c \
					  03_negative_number.c \
					  04_positive_number.c \
					  05_prefix_single_zero.c \
					  06_prefix_multi_zero.c \
					  07_plus_minus.c \
					  08_minus_plus.c \
					  09_double_minus.c \
					  10_double_plus.c \
					  11_plus_in_the_middle.c \
					  12_minus_in_the_middle.c \
					  13_is_space.c \
					  14_maximum.c \
					  15_minimum.c \
					  16_nan_after_space.c \
					  17_backspace.c \
					  18_empty_string.c \
					  19_solo_minus.c \
					  20_solo_plus.c

STRNCMP				= 00_launcher.c \
					  01_basic_test.c \
					  02_nan_charactors.c \
					  03_same_charactors_in_beggining.c \
					  04_bigger_size_than_charactors.c \
					  05_hidden_charactors.c \
					  06_long_string.c \
					  07_long_long_string.c \
					  08_size_zero.c

SRCS				= $(addprefix $(ATOI_DIR), $(ATOI)) \
					  $(addprefix $(STRNCMP_DIR), $(STRNCMP))


## Compiled Files ##
OBJS				= $(SRCS:%.c=$(OBJS_DIR)%.o)
LIBFT_NAME			= $(LIBFT_DIR)libft.a
LIBUNIT_NAME		= $(LIBUNIT_DIR)libunit.a
NAME				= real_tests
REPORT_NAME			= report.txt


# **************************************************************************** #


## Rules ##

all:				$(NAME)

clean:
					@$(MAKE) clean -C $(LIBFT_DIR)
					@$(MAKE) clean -C $(LIBUNIT_DIR)
					@echo "$(_RED)Cleaning real_tests objects...\n$(_RESET)"
					@$(RM) $(OBJS_DIR)

fclean:
					@$(MAKE) fclean -C $(LIBFT_DIR)
					@$(MAKE) fclean -C $(LIBUNIT_DIR)
					@echo "$(_RED)Cleaning real_tests objects...\n$(_RESET)"
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
					@mkdir -p $(OBJS_DIR)$(ATOI_DIR)
					@mkdir -p $(OBJS_DIR)$(STRNCMP_DIR)

## Phony ##
.PHONY:				all clean fclean re test
