# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/15 13:43:38 by gmolin            #+#    #+#              #
#    Updated: 2019/10/15 15:39:58 by gmolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c \
		./srcs/ft_strlen.c ./srcs/ft_swap.c

INCLUDES = ./includes/

OUTPUT = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME): 
		gcc -Wall -Wextra -Werror -I $(INCLUDES) -c $(SRCS)
		ar rc $(NAME) $(OUTPUT)
		ranlib $(NAME)

clean:
		/bin/rm -f $(OUTPUT)
		
fclean:
		/bin/rm -f $(NAME)

re: fclean all
