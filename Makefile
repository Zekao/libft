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

SRCS =	ft_atoi.c		\
	ft_isacii.c	\
	ft_isalnum.c	\
	ft_isalpha.c	\
	ft_isdigit.c	\
	ft_isprint.c	\
	ft_split.c		\
	ft_strjoin.c	\
	ft_strdup.c	\
	ft_strlcpy.c	\
	ft_strlcat.c	\
	ft_strlen.c	\
	ft_strnstr.c	\
	ft_tolower.c	\
	ft_toupper.c	\
	ft_itoa.c		\
	ft_memcmp.c	\
	ft_putstr.c	\
	ft_memcpy.c	\
	ft_putstr_fd.c	\
	ft_putchar_fd.c	\
	ft_putnbr_fd.c	\
	ft_calloc.c	\
	ft_putendl_fd.c	\
	ft_strncmp.c	\
	ft_bzero.c		\
	ft_strchr.c	\
	ft_strrchr.c	\
	ft_memmove.c	\
	ft_memset.c	\
	ft_memchr.c	\
	ft_substr.c	\
	ft_strmapi.c	\
	ft_striteri.c	\
	ft_strtrim.c	\

BONUS = ft_lstnew.c	\
	ft_lstadd_front.c	\
	ft_lstsize.c	\
	ft_lstlast.c	\
	ft_lstadd_back.c	\
	ft_lstdelone.c	\
	ft_lstclear.c	\
	ft_lstiter.c	\
	ft_lstmap.c	\


OBJS := ${SRCS:.c=.o}

BONUSOBJS := ${BONUS:.c=.o}

CC = gcc

RM = rm -f

INC_DIR = includes

CFLAGS =  -Wall -Wextra -Werror

.c.o:
	@${CC} ${CFLAGS} -c -I ${INC_DIR} $< -o ${<:.c=.o}

all: $(NAME)
	@clear
	@echo "\033[0;31m\n                   "
	@echo "                  ⣠⣤⣤⣤⣤⣤⣶⣦⣤⣄⡀⠀"
	@echo "              ⢀⣴⣿⡿⠛⠉⠙⠛⠛⠛⠛⠻⢿⣿⣷⣤⡀   "
	@echo "              ⣼⣿⠋⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⠈⢻⣿⣿⡄⠀⠀⠀"
	@echo "             ⣸⣿⡏⠀⠀⠀⣠⣶⣾⣿⣿⣿⠿⠿⠿⢿⣿⣿⣿⣄⠀"
	@echo "             ⣿⣿⠁⠀⠀⢰⣿⣿⣯⠁⠀⠀⠀⠀⠀⠀⠀⠈⠙⢿⣷⡄⠀"
	@echo "       ⣀⣤⣴⣶⣶⣿⡟⠀⠀⠀⢸⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣷⠀"
	@echo "⠀     ⣿⡟⠋⠉⣹⣿⡇⠀⠀⠀⠘⣿⣿⣿⣿⣷⣦⣤⣤⣤⣶⣶⣶⣶⣿⣿⣿⠀ \033[0;32m When the makefile is sus \033[0;31m"
	@echo "⠀    ⢸⣿⡇⠀⠀⣿⣿⡇⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃"⠀
	@echo "     ⣸⣿⡇⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠉⠻⠿⣿⣿⣿⣿⡿⠿⠿⠛⢻⣿⡇⠀⠀"
	@echo "     ⣿⣿⠁⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣧⠀"
	@echo "     ⣿⣿⠀⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⠀" 
	@echo "     ⣿⣿⠀⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⠀      \033[1;33m emaugale's libft without bonus (make bonus)\033[0;31m"
	@echo "     ⢿⣿⡆⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⡇"
	@echo "     ⠸⣿⣧⡀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⠃"
	@echo "      ⠛⢿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀⣰⣿⣿⣷⣶⣶⣶⣶⠶⠀⢠⣿⣿"
	@echo "           ⣿⣿⠀⠀⠀⠀⠀⣿⣿⡇⠀⣽⣿⡏⠁⠀⠀⢸⣿⡇⠀"
	@echo "           ⣿⣿⠀⠀⠀⠀⠀⣿⣿⡇⠀⢹⣿⡆⠀⠀⠀⣸⣿⠇"
	@echo "           ⢿⣿⣦⣄⣀⣠⣴⣿⣿⠁⠀⠈⠻⣿⣿⣿⣿⡿⠏"
	@echo "           ⠈⠛⠻⠿⠿⠿⠿⠋⠁"
	@echo "\033[0;34m                     \033[1;36m 100/100 or consequences\033[0;32m"
	@sleep 1
	@echo "\033[1;34m Bonne correction !\n"
	@sleep 2

$(NAME): ${OBJS}
	@ar rc $(NAME) ${OBJS}

bonus: ${OBJS} ${BONUSOBJS}
	@ar rc $(NAME) ${OBJS} ${BONUSOBJS}
	@echo "⠀\033[1;32m⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡜⢣⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠎⡴⢦⠱⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⢎⣜⣉⣉⣧⡱⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⢃⡞⠒⣒⣒⠒⢳⡘⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⢡⣎⡩⠭⠤⠤⠭⢍⣱⡜⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡴⢡⡯⠴⢒⣈⣩⣉⣑⡒⠠⣹⡌⢦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡔⣡⣣⠔⡺⡋⡁⢀⡀⢈⠙⢟⠢⣝⣄⢢⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀When the makefile is an illuminati"
	@echo "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡜⣰⡟⠁⢰⡓⢎⣀⣸⣿⣷⡱⢚⡆⠈⢻⣆⢣⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠎⡼⣇⠣⡀⠸⡄⢊⢿⣿⣿⡿⡑⢠⠇⢀⠜⣸⢧⠱⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "⠀⠀⠀⠀⠀⠀⠀⠀⢠⢋⢼⡙⢌⠳⣍⠲⢽⣄⣁⠂⠐⣈⣠⡯⠔⣡⠞⡡⢊⣧⡙⡄⠀⠀⠀⠀⠀⠀⠀⠀\033[1;34memaugale's libft with bonus \033[1;32m "
	@echo "⠀⠀⠀⠀⠀⠀⠀⣠⢃⣞⠣⡙⠦⡑⠦⣍⡒⠤⠬⠭⠭⠥⠤⢒⣩⠴⢊⠴⢋⠜⣳⡘⣄⠀⠀⠀⠀⠀⠀⠀"
	@echo "⠀⠀⠀⠀⠀⠀⣰⣃⣛⣚⣓⣚⣓⣚⣓⣒⣛⣛⣓⣒⣒⣚⣛⣛⣒⣚⣓⣚⣓⣚⣒⣛⣘⣆		"
	@echo "         125/100 or consequences"

clean: 
	@${RM} ${OBJS} ${BONUSOBJS}
	@echo "\033[1;31m ⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣶⣄⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣦⣄⣀⡀⣠⣾⡇⠀⠀⠀⠀"
	@echo "⠀⠀⠀⠀⠀⠀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀"
	@echo "⠀⠀⠀⠀⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⢿⣿⣿⡇⠀⠀⠀⠀"
	@echo "⠀⣶⣿⣦⣜⣿⣿⣿⡟⠻⣿⣿⣿⣿⣿⣿⣿⡿⢿⡏⣴⣺⣦⣙⣿⣷⣄⠀⠀⠀\033[1;34m Goodbye everyone\033[1;31m"
	@echo "⠀⣯⡇⣻⣿⣿⣿⣿⣷⣾⣿⣬⣥⣭⣽⣿⣿⣧⣼⡇⣯⣇⣹⣿⣿⣿⣿⣧⠀⠀"
	@echo "⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠸⣿⣿⣿⣿⣿⣿⣿⣷⠀"
	@echo "\033[1;32m Objects have been deleted"
fclean: clean
	@${RM} $(NAME) 
	@echo " ${NAME} have been deleted"

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(BONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(BONUSOBJS)

re: fclean all

.PHONY: all clean fclean re libft.a bonus
