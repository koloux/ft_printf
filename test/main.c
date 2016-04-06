/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/03 11:55:48 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/06 09:58:01 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "../project/libft/libft.h"

void	foo(char *fmt, ...)
{
	va_list	ap;
	char *s;

	va_start(ap, fmt);
	while (*fmt)
	{
		if (*fmt == '%')
		{
			s = va_arg(ap, char *);
			write(1, s, 9);
		}
		else
			write(1, &(*fmt), 1);
		fmt++;
	}
	va_end(ap);
}

int	main(void)
{
	char	spec;

	spec = 'p';
	char *ptr;
	//cast to ui
	printf("---------\nspec |%c| : %p\n---------\n", spec, ptr);
	spec = 'd';
	int d = -13;
	printf("---------\nspec |%c| : %d\n---------\n", spec, d);
	spec = 'i';
	int i = 42;
	printf("---------\nspec |%c| : %i\n---------\n", spec, i);
	spec = 'o';
	int o = 42;
	printf("---------\nspec |%c| : %o\n---------\n", spec, o);
	spec = 'x';
	int x = 16;
	printf("---------\nspec |%c| : %x\n---------\n", spec, x);

	printf("testing ellipse\n");
	char *str = "je si bo\n";
	char *str2 = "ta mere!\n";
	foo("%you're so french !\n%", str, str2);

	printf("unsigned long");
	unsigned long j = 314;
	printf("j->%lu\n", j);

	printf("ptr address\n");
	int a = 10;
	int *yo = malloc(100000000000); 
	char *bif = ft_itoa_base((int)yo, 16);
	write(1, bif, 10);
	printf("\n%p\n", yo);
}
