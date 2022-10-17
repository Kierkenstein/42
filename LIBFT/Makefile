# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gazzopar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/26 14:50:08 by gazzopar          #+#    #+#              #
#    Updated: 2022/10/11 09:09:34 by gazzopar         ###   ########.fr        #
#    Updated: 2022/09/30 21:06:12 by gazzopar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS	= --no-print-directory

NAME 		= libft.a

CC			= gcc

SRC			= 	ft_isalnum.c \
				ft_isdigit.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_atoi.c \
				ft_strnstr.c \
				ft_strdup.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_calloc.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putnbr_fd.c \
				ft_putendl_fd.c \
				ft_strjoin.c \
				ft_substr.c \
				ft_strtrim.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_split.c \
				ft_itoa.c

SRC_BONUS 	=	ft_lstnew_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstmap_bonus.c

OBJ			= $(SRC:.c=.o)

OBJ_BONUS	= $(SRC_BONUS:.c=.o)

CFLAGS		= -Wall -Wextra -Werror

ifdef		bonus
			SRC += $(SRC_BONUS)
endif

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)

all:		$(NAME)

%.o : %.c
			$(CC) $(CFLAGS) -c $< -o $@

bonus:		$(OBJ)
			@make bonus=1

clean:		
			rm -rf $(OBJ) $(OBJ_BONUS)
			@echo "Suppression des fichiers .o"

fclean:		clean
			rm -rf $(NAME)
			@echo "Supression des fichiers .o et .a"

re:			fclean all

.PHONY:		all clean fclean re

so:
			$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
			gcc -nostartfiles -shared -o libft.so $(OBJ) $(OBJ_BONUS)
