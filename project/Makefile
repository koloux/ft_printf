#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/03/07 09:32:29 by nhuber            #+#    #+#             *#
#*   Updated: 2016/04/05 17:25:03 by nhuber           ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

CC = gcc
FLAGS = -Wall -Wextra -Werror
AR = ar rc
NAME = libftprintf.a
LIB = ./libft/libft.a
FILES = ft_printf.c 
OBJ = $(FILES:.c=.o)
TMP = Makefile~  $(F_DIR)/header.h~ $(NAME)~ $(FILES:.c=.c~)

all : $(NAME)

$(NAME) :
	@echo Project : $(NAME)
	@echo "\t"- Compiler : $(CC)
	@echo "\t"- Flags : $(FLAGS)
	@$(CC) $(FLAGS) -c $(FILES) -I $(LIB)
	@$(AR) $(NAME) $(OBJ)

clean :
	@echo clean :"\n\tTemporary and binary files deteleted"
	@rm -f $(TMP) $(OBJ)

fclean : clean
	@echo fclean :"\n\tExec file deleted"
	@rm -f $(NAME)

re : fclean all
