# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brjoves <brjoves@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/25 12:02:22 by brjoves           #+#    #+#              #
#    Updated: 2023/11/07 17:18:39 by brjoves          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = checking.c errors.c ft_lst.c instructions.c main.c mainutils.c \
		operations.c sort.c utils.c instructions2.c ft_lst2.c

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):	$(OBJS)
			make -C libft/ && mv libft/libft.a .
			$(CC) -o $(NAME) $(OBJS) libft.a

clean:
		make clean -C libft/
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME) libft.a

re: fclean all

.PHONY:	all clean fclean re
