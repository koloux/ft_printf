/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 17:07:34 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/08 16:06:23 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(char *fmt, ...)
{
	va_list	ap;
	char	**opt;
	size_t	len;

	if (!(opt = (char **)ft_memalloc(sizeof(char *) * 6)))
		return (-1);
	opt[5] = NULL;
	va_start(ap, fmt);
	while (*fmt != '\0')
	{
		len = ft_strchrlen(fmt, '%');
		write(1, fmt, len);
		fmt += len;
		if (*fmt)
		{
			//error percent ?
			if (*fmt == '%' && (*fmt + 1) == '%')
			{
				fmt++;
				write(1, "%", 1);
			}
			else
			{
				if (error_percent(fmt) != 0)
				{
					printf("-||TEST||%s|-", fmt);
					flags_get(&fmt, &(opt[0]));
					spec_get(&fmt, &(opt[1]));
					if (opt[1][0] == 115)
						ft_putstr(va_arg(ap, char *));
					if (opt[1][0] == 99)
						ft_putchar(va_arg(ap, int));	
					if (opt[1][0] == 105 || opt[1][0] == 100)
						ft_putnbr(va_arg(ap, int));
					//ptr on func
				}
			}
			fmt++;
		}
	}
	va_end(ap);
	return (1);
}
