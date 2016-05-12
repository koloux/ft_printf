/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/30 15:46:03 by nhuber            #+#    #+#             */
/*   Updated: 2016/05/12 19:37:43 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(void)
{
	char* l = setlocale(LC_ALL, "");
	if (l == NULL)
		printf("locale not set\n");
	else
		printf("set %s\n", l);

	int d;
	int c;

	d = ft_printf("%#o\n", 0);
	c = printf("%#o\n", 0);
	printf("%d<---->%d\n", d, c);
	return (1);
}
