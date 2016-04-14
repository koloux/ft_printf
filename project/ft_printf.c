/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 17:07:34 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/14 11:35:54 by nhuber           ###   ########.fr       */
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
				if (error_convert(fmt) != 0)
				{
					fmt++;
					flags_get(&fmt, &(opt[0]));
					width_get(&fmt, &(opt[1]));
					precision_get(&fmt, &(opt[2]));
					length_get(&fmt, &(opt[3]));
					spec_get(&fmt, &(opt[4]));
					//printf("ALL OPTIONS : |%s|%s|%s|%s|%s|\n", opt[0], opt[1], opt[2], opt[3], opt[4]);
					if (error_tags(opt) != -1)
					{
						//ptr func
						convert(ap, opt);					
					}
					else
					{
						printf("ERROR MOFO\n");
						return (-1);
					}
				}
			}
			fmt++;
		}
	}
	va_end(ap);
	return (1);
}
