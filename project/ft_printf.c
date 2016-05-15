/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 10:02:51 by nhuber            #+#    #+#             */
/*   Updated: 2016/05/15 14:15:21 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_printf(char *fmt, ...)
{
	int		plen[4];
	char	opt[5];
	va_list	va;
	t_char	string;

	va_start(va, fmt);
	plen[3] = 0;
	while (*fmt)
	{
		plen[3] += ft_strprintcount(fmt, '%');
		fmt += ft_strchrlen(fmt, '%');
		set_params(plen, opt, &string);
		if (*fmt)
		{
			get_tags(&fmt, opt, plen);
			if (ft_strindexof("sSpdDioOuUxXcC%", opt[4]) != -1)
			{
				fmt++;
				convert(va, opt, plen, string);
			}
			else
				set_undefined(opt, plen, -1);
		}
	}
	va_end(va);
	return (plen[3]);
}
