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
FILES = ft_printf.c spec.c flags.c width.c precision.c length.c error.c\
	ft_memalloc.c ft_memdel.c ft_bzero.c \
	ft_strnew.c ft_strchrlen.c ft_strindexof.c ft_strchr.c ft_strdup.c \
	ft_strjoin.c ft_strcpy.c ft_strcmp.c ft_strsub.c \
	ft_putwchar.c ft_wstrlen.c \
	ft_putchar.c ft_putnbr.c ft_putstr.c \
	ft_bitgetfour.c ft_bitgetoctal.c \
	ft_isdigit.c ft_isupper.c \
	
OBJ = $(FILES:.c=.o)
TMP = Makefile~  $(F_DIR)/header.h~ $(NAME)~ $(FILES:.c=.c~)

all : $(NAME)

$(NAME) :
	@echo Project : $(NAME)
	@echo "\t"- Compiler : $(CC)
	@echo "\t"- Flags : $(FLAGS)
	@$(CC) $(FLAGS) -c $(FILES) 
	@$(AR) $(NAME) $(OBJ)

clean :
	@echo clean :"\n\tTemporary and binary files deteleted"
	@rm -f $(TMP) $(OBJ)

fclean : clean
	@echo fclean :"\n\tExec file deleted"
	@rm -f $(NAME)

test :
	@echo "\t\tTESTING\n-----------------------------"
	@$(CC) $(FLAGS) -o ze_printf $(FILES) main.c -I $(HEADER)
	@./ze_printf

re : fclean all
