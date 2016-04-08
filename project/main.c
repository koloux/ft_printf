/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/06 13:41:30 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/07 18:44:43 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(void)
{
	char	*str = "toi !\n";
	char	*str2 = "la pute";
	char	c = 'A';
	int	nb = 42;
	ft_printf("%0c %d\nSlt %s\nTa mere %s", c, nb, str, str2);

	return (0);
}
