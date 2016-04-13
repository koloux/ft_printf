/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/06 13:41:30 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/13 17:39:56 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(void)
{
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
		ft_printf("I am THE : %lc\n", wc);
		printf("------2------\n");
		wc = 937;
		ft_printf("I am THE : %C\n", wc);
	}
	return (0);
}
