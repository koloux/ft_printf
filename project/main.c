/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/06 13:41:30 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/13 11:56:59 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(void)
{
	char	*str = "toi !\n";
	char	*str2 = "la pute";
	char	c = 'A';
	int	nb = 42;
	ft_printf("%c\n%.4d\nSlt %.3s\nTa mere %s\n", c, nb, str, str2);

/*	
	printf("\n\nTESTING WCHAR\n");
	char *l = setlocale(LC_ALL, "");
	if (l == NULL)
	{
		printf("error set\n");
	}
	else
	{
		printf("------1------\n");
		wchar_t wc = 945;
		int d;
		ft_putwchar(wc);
		d = printf("\n%C\n", wc);
		printf("%d\n", d);
		printf("------2------\n");
		wc = 255;
		ft_putwchar(wc);
		printf("\n%C\n", wc);
	}
*/
	return (0);
}
