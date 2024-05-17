# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: licohen <licohen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/15 15:58:32 by licohen           #+#    #+#              #
#    Updated: 2024/05/17 15:24:05 by licohen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC_SOURCE_FILES = ft_strcmp.c ft_putstr.c ft_putchar.c ft_strlen.c ft_swap.c
SRCS             = $(addprefix $(SRC), $(SRC_SOURCE_FILES))
SRC_OBJS         = $(SRCS:.c=.o)
NAME           = libft.a
SRC              = ./srcs/
HEADERS          = ./includes/

CC               = cc

all : $(NAME)

$(NAME) : $(SRC_OBJS)
	ar rc $(NAME) $(SRC_OBJS)
	

.c.o :
	$(CC) -Wall -Wextra -Werror -I $(HEADERS) -c $< -o $(<:.c=.o)

clean :
	rm -rf $(SRC_OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean 
	$(MAKE) all

.PHONY: all fclean 