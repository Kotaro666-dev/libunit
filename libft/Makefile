# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/24 08:21:08 by kkamashi          #+#    #+#              #
#    Updated: 2021/05/08 23:01:01 by kefujiwa         ###   ########.fr        #
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

## Files ##
SRCS				= ft_atoi.c \
					  ft_strlen.c \
					  ft_bzero.c \
					  ft_calloc.c \
					  ft_isalpha.c \
					  ft_isdigit.c \
					  ft_isprint.c \
					  ft_itoa.c \
					  ft_memccpy.c \
					  ft_memchr.c \
					  ft_memcmp.c \
					  ft_memcpy.c \
					  ft_memmove.c \
					  ft_memset.c \
					  ft_putchar_fd.c \
					  ft_putendl_fd.c \
					  ft_putnbr_fd.c \
					  ft_putstr_fd.c \
					  ft_split.c \
					  ft_strchr.c \
					  ft_strdup.c \
					  ft_strjoin.c \
					  ft_strlcat.c \
					  ft_strlcpy.c \
					  ft_isascii.c \
					  ft_strmapi.c \
					  ft_strncmp.c \
					  ft_strnstr.c \
					  ft_strrchr.c \
					  ft_strtrim.c \
					  ft_substr.c \
					  ft_tolower.c \
					  ft_isalnum.c \
					  ft_toupper.c \
					  ft_swap.c \
					  ft_bubblesort.c \
					  ft_qsort.c \
					  ft_lstnew.c \
					  ft_lstlast.c \
					  ft_lstadd_front.c \
					  ft_lstsize.c \
					  ft_lstadd_back.c \
					  ft_lstdelone.c \
					  ft_lstclear.c \
					  ft_lstiter.c

## Compiled Files ##
OBJS				= $(SRCS:%.c=$(OBJS_DIR)%.o)
NAME				= libft.a


# **************************************************************************** #


## Rules ##

all:				$(NAME)

clean:
					@echo "$(_RED)Cleaning libft objects...\n$(_RESET)"
					@$(RM) $(OBJS_DIR)

fclean:				clean
					@echo "$(_RED)Deleting library '$(NAME)'...\n$(_RESET)"
					@$(RM) $(NAME)

re:					fclean all

$(NAME):			$(OBJS)
					@$(AR) $(NAME) $(OBJS)
					@echo "\n\n$(_GREEN)Library '$(NAME)' compiled.\n$(_RESET)"

$(OBJS):			$(OBJS_DIR)

$(OBJS_DIR)%.o:		$(SRCS_DIR)%.c
					@printf "$(_YELLOW)Generating libft objects... %-33.33s\r$(_RESET)" $@
					@$(CC) $(CFLAGS) -I $(HEADER_DIR) -c $< -o $@

$(OBJS_DIR):
					@mkdir -p $(OBJS_DIR)

## Phony ##
.PHONY: all clean fclean re
