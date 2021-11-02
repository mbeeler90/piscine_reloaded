# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manuelbeeler <manuelbeeler@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 10:13:42 by manuelbeele       #+#    #+#              #
#    Updated: 2021/11/02 10:13:47 by manuelbeele      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

FLAGS = -Wall -Wextra -Werror -c -I

HEAD = head.h

SRCS = ft_display_file.c putchar.c putstr.c str_len.c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(HEAD) $(SRCS)
	gcc *.o -o $(NAME)

.PHONY: clean fclean re

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
