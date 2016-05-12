#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/03/07 09:32:29 by nhuber            #+#    #+#             *#
#*   Updated: 2016/04/07 17:41:23 by nhuber           ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

CC = gcc
FLAGS = -Wall -Wextra -Werror
AR = ar rc
NAME = libftprintf.a
HEADER = libftprintf.h
FILES = ft_printf.c convert.c get.c print.c set.c error.c max.c\
	ft_memalloc.c ft_memdel.c ft_bzero.c \
	ft_strnew.c ft_strlen.c ft_strindexof.c ft_strdup.c \
	ft_atoi.c ft_strcount.c \
	ft_putwchar.c ft_putwstr.c ft_wstrlen.c \
	ft_putlenstr.c ft_putnchar.c ft_putchar.c \
	ft_isdigit.c ft_isupper.c ft_power.c ft_itoa_base.c ft_uitoa_base.c \
	
OBJ = $(FILES:.c=.o)
TMP = Makefile~  $(F_DIR)/header.h~ $(NAME)~ $(FILES:.c=.c~)

all : $(NAME)

$(NAME) :
	@echo Project : $(NAME)
	@echo "\t"- Compiler : $(CC)
	@echo "\t"- Flags : $(FLAGS)
	@$(CC) $(FLAGS) -c $(FILES) 
	@$(AR) $(NAME) $(OBJ)
	@ranlib $(NAME)

clean :
	@echo clean :"\n\tTemporary and binary files deteleted"
	@rm -f $(TMP) $(OBJ)

fclean : clean
	@echo fclean :"\n\t" $(NAME) deleted
	@rm -f $(NAME)

test :
	@echo "\t\tTESTING\n-----------------------------"
	@$(CC) -o ze_printf $(FILES) main.c -I $(HEADER) && ./ze_printf

re : fclean all

.PHONY : all clean fclean re
