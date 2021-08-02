# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emaugale <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/26 20:40:06 by emaugale          #+#    #+#              #
#    Updated: 2021/08/02 02:10:41 by emaugale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_atoi.c	\
	ft_isacii.c	\
	ft_isalnum.c	\
	ft_isalpha.c	\
	ft_isdigit.c	\
	ft_isprint.c	\
	ft_split.c	\
	ft_strdup.c	\
	ft_strlcpy.c	\
	ft_strlen.c	\
	ft_tolower.c	\
	ft_toupper.c	\
	ft_itoa.c 	\

D_OBJS =  srcs

OBJS := ${patsubst %.c, ${D_OBJS}/%.o, ${SRCS}}

NAME = libft.a

CC = gcc

RM = rm -f

INC_DIR = includes

CFLAGS =  -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c -I ${INC_DIR} $< -o ${<:.c=.o}

all: ${NAME}

	@echo "Lib have been created"
${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

clean: 
	${RM} ${OBJS}
	@echo "Objects have been deleted"
fclean: clean
	${RM} ${NAME}
	@echo "Lib have been deleted"

re: fclean all

.PHONY: all clean fclean re
