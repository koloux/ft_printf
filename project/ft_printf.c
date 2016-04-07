/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 17:07:34 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/07 17:34:50 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int ft_printf(char *fmt, ...)
{
	va_list	ap;
	size_t	len;

	va_start(ap, fmt);
	while (*fmt != '\0')
	{
		len = ft_strchrlen(fmt, '%');
		write(1, fmt, len);
		fmt += len;
		if (*fmt)
		{
				
			fmt++;
		}
	}
	va_end(ap);
	return (1);
}
