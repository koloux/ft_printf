#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/03/07 09:32:29 by nhuber            #+#    #+#             *#
#*   Updated: 2016/03/18 11:36:03 by nhuber           ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = fillit
L_DIR = library/libft
F_DIR = src
H_DIR = src
FILES = $(F_DIR)/main.c $(F_DIR)/move.c $(F_DIR)/pos.c $(F_DIR)/print.c \
	$(F_DIR)/read.c $(F_DIR)/check.c $(F_DIR)/debug.c $(F_DIR)/solve.c

TMP = Makefile~  $(F_DIR)/header.h~ $(NAME)~ $(FILES:.c=.c~)

all : $(NAME)

$(NAME) :
	@echo Project : $(NAME)
	@echo "\t"- Compiler : $(CC)
	@echo "\t"- Flags : $(FLAGS)
	@$(CC) -o $(NAME) $(FLAGS) $(FILES) -I $(L_DIR) -L $(L_DIR) -lft

clean :
	@echo clean :"\n\tTemporary files deteleted"
	@rm -f $(TMP)

fclean : clean
	@echo fclean :"\n\tExec file deleted"
	@rm -f $(NAME)

test :
	@echo Executing test :
	@./$(NAME)

re : fclean all
