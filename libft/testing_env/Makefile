# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/16 09:43:36 by gmolin            #+#    #+#              #
#    Updated: 2019/10/16 16:54:53 by gmolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ../ft_*.c

INCLUDES = ../libft.h

OUTPUT = ft_*.o 

EXE = test

MAIN = ./main/main.c

all: $(NAME)

$(NAME): 
		gcc -Wall -Wextra -Werror -I $(INCLUDES) -c $(SRCS)
		ar rc $(NAME) $(OUTPUT)
		ranlib $(NAME)

clean:
		/bin/rm -f $(OUTPUT)

norm:
		norminette $(SRCS)

exe:
		gcc -Wall -Wextra -Werror -o $(EXE) $(MAIN) -I$(INCLUDES) -L. -lft

exere:
		/bin/rm -f $(EXE)
		gcc -Wall -Wextra -Werror -o $(EXE) $(MAIN) $(SRCS)

fclean:
		/bin/rm -f $(NAME) $(EXE)

aclean:
		/bin/rm -f $(OUTPUT)
		/bin/rm -f $(NAME) $(EXE)
		/bin/rm -f $(EXE)

re: fclean all
