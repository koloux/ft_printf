/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/19 11:38:43 by nhuber            #+#    #+#             */
/*   Updated: 2016/05/19 13:00:40 by nhuber           ###   ########.fr       */
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

	d = ft_printf("{45678}\n");
	c = printf("{45678}\n");
	printf("%d<---->%d\n", d, c);

	return (0);
}
