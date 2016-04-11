/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/11 14:45:39 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/11 19:10:23 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putwchar(wchar_t wc)
{
	int		print;
	int		index;
	int		mask;

	index = 7;
	print = (int)wc;
	while (ft_bitgetfour(print, index) < 7 && index > 1)
		index--;
	if (print < 127)
		write(1, &print, 1);
	else
	{
		mask = 256 - ft_power(2, (7 - index));
		print = (print >> (index * 6) | mask);
		write(1, &print, 1);
		while (index)
		{
			print = (int)wc >> (6 * (index - 1));
			print = (print & 63) | 128;
			write(1, &print, 1);
			index--;
		}
	}
}
