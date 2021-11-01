# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manuelbeeler <manuelbeeler@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/30 10:17:50 by mbeeler           #+#    #+#              #
#    Updated: 2021/11/01 22:05:29 by manuelbeele      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCH = ./includes/

SRCS = ./srcs/ft_putchar.c
SRCS += ./srcs/ft_putstr.c
SRCS += ./srcs/ft_strcmp.c
SRCS += ./srcs/ft_strlen.c
SRCS += ./srcs/ft_swap.c

FLAGS = -Wall -Wextra -Werror -c -I $(SRCH)

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRCS)
	ar rc $(NAME) *.o

.PHONY: clean fclean re

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
