/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/06 13:41:30 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/09 16:01:46 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(void)
{
	char	*str = "toi !\n";
	char	*str2 = "la pute";
	char	c = 'A';
	int	nb = 42;
	ft_printf("%+0-0+0-0123c\n%.4d\nSlt %.3s\nTa mere %s\n", c, nb, str, str2);


//	char *format = ".a13u37";
//	char *option = NULL;
	return (0);
}
