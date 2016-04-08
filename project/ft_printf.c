/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 17:07:34 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/08 13:22:48 by nhuber           ###   ########.fr       */
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
			flags_get(&fmt, &(opt[0]));
			printf("FMT :%c\n", *fmt);
			spec_get(&fmt, &(opt[1]));
			printf("\nFLAGS : %s\nSPEC : %s\n", opt[0], opt[1]);
			//ptr on func
			fmt++;
		}
	}
	va_end(ap);
	return (1);
}
