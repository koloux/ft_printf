/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/11 14:45:39 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/11 16:56:09 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putwchar(wchar_t wc)
{
	int		print;
	int		index;

	index = 7;
	print = (int)wc;
	while (!ft_bitgetfour((int)wc, index))
		index--;
	if (print < 127)
		write(1, &print, 1);
	else
	{
		
	}
}
