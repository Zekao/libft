# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emaugale <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/26 20:40:06 by emaugale          #+#    #+#              #
#    Updated: 2021/08/07 18:42:00 by emaugale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	srcs/ft_atoi.c		\
	srcs/ft_isacii.c	\
	srcs/ft_isalnum.c	\
	srcs/ft_isalpha.c	\
	srcs/ft_isdigit.c	\
	srcs/ft_isprint.c	\
	srcs/ft_split.c		\
	srcs/ft_strjoin.c	\
	srcs/ft_strdup.c	\
	srcs/ft_strlcpy.c	\
	srcs/ft_strlcat.c	\
	srcs/ft_strlen.c	\
	srcs/ft_strnstr.c	\
	srcs/ft_tolower.c	\
	srcs/ft_toupper.c	\
	srcs/ft_itoa.c		\
	srcs/ft_memcmp.c	\
	srcs/ft_putstr.c	\
	srcs/ft_memcpy.c	\
	srcs/ft_putstr_fd.c	\
	srcs/ft_putchar_fd.c	\
	srcs/ft_putnbr_fd.c	\
	srcs/ft_calloc.c	\
	srcs/ft_putendl_fd.c	\
	srcs/ft_strncmp.c	\
	srcs/ft_bzero.c		\
	srcs/ft_strchr.c	\
	srcs/ft_strrchr.c	\
	srcs/ft_memmove.c	\
	srcs/ft_memset.c	\
	srcs/ft_memchr.c	\
	srcs/ft_substr.c	\
	srcs/ft_strmapi.c	\
	srcs/ft_striteri.c	\
	srcs/ft_strtrim.c	\

BONUS = srcs/ft_lstnew.c	\
	srcs/ft_lstadd_front.c	\
	srcs/ft_lstsize.c	\
	srcs/ft_lstlast.c	\
	srcs/ft_lstadd_back.c	\
	srcs/ft_lstdelone.c	\
	srcs/ft_lstclear.c	\
	srcs/ft_lstiter.c	\
	srcs/ft_lstmap.c	\

D_OBJS =  srcs

OBJS := ${SRCS:.c=.o}

BONUSOBJS := ${BONUS:.c=.o}

CC = gcc

RM = rm -f

INC_DIR = includes

CFLAGS =  -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c -I ${INC_DIR} $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): ${OBJS}
	ar rc $(NAME) ${OBJS}

bonus: ${OBJS} ${BONUSOBJS}
	ar rc $(NAME) ${OBJS} ${BONUSOBJS}

clean: 
	${RM} ${OBJS}
	@echo "Objects have been deleted"
fclean: clean
	${RM} $(NAME)
	@echo "Lib have been deleted"

re: fclean all

.PHONY: all clean fclean re libft.a
