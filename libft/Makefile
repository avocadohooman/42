# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/16 09:36:49 by gmolin            #+#    #+#              #
#    Updated: 2019/10/16 15:34:25 by gmolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./ft_*.c

INCLUDES = ./libft.h

OUTPUT = ft_*.o

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
