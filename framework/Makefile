# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/08 12:23:32 by kkamashi          #+#    #+#              #
#    Updated: 2021/05/09 06:17:44 by kefujiwa         ###   ########.fr        #
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
LIBFT_DIR			= ../libft/

## Files ##
SRCS				= launch_tests.c \

## Compiled Files ##
OBJS				= $(SRCS:%.c=$(OBJS_DIR)%.o)
LIBFT_NAME			= $(LIBFT_DIR)libft.a
NAME				= libunit.a


# **************************************************************************** #


## Rules ##

all:				$(NAME)

clean:
					@$(MAKE) clean -C $(LIBFT_DIR)
					@echo "$(_RED)Cleaning libunit objects...\n$(_RESET)"
					@$(RM) $(OBJS_DIR)

fclean:
					@$(MAKE) fclean -C $(LIBFT_DIR)
					@echo "$(_RED)Cleaning libunit objects...\n$(_RESET)"
					@$(RM) $(OBJS_DIR)
					@echo "$(_RED)Deleting library '$(NAME)'...\n$(_RESET)"
					@$(RM) $(NAME)

re:					fclean all

$(NAME):			$(LIBFT_NAME) $(OBJS)
					@cp $(LIBFT_NAME) $(NAME)
					@$(AR) $(NAME) $(OBJS)
					@echo "\n\n$(_GREEN)Library '$(NAME)' compiled.\n$(_RESET)"

$(LIBFT_NAME):
					@$(MAKE) -C $(LIBFT_DIR)

$(OBJS):			$(OBJS_DIR)

$(OBJS_DIR)%.o:		$(SRCS_DIR)%.c
					@printf "$(_YELLOW)Generating libunit objects... %-33.33s\r$(_RESET)" $@
					@$(CC) $(CFLAGS) -I $(HEADER_DIR) -c $< -o $@

$(OBJS_DIR):
					@mkdir -p $(OBJS_DIR)

## Phony ##
.PHONY:				all clean fclean re
