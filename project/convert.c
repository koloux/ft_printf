/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/13 14:43:34 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/18 14:50:03 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			convert(va_list ap, char **opt)
{
	if (opt[4][0] == 'd' || opt[4][0] == 'i' || opt[4][0] == 'D')	
		printnbr(opt, convert_int(ap, opt));
	else if (opt[4][0] == 'o' || opt[4][0] == 'u' || opt[4][0] == 'x' ||
			opt[4][0] == 'O' || opt[4][0] == 'U' || opt[4][0] == 'X')	
		printnbr(opt, convert_uint(ap, opt));
	else
		convert_char(ap, opt);
	//send ret to appropriate conversion
}

void	convert_char(va_list ap, char **opt)
{
	if (opt[4][0] == 'C' || (opt[4][0] == 'c' && !ft_strcmp(opt[3], "l")))
		ft_putwchar(va_arg(ap, wchar_t));
	else if (opt[4][0] == 'S' || (opt[4][0] == 's' && !ft_strcmp(opt[3], "l")))
		ft_putwstr(va_arg(ap, wchar_t *));
	else if (opt[4][0] == 'c')
		ft_putchar(va_arg(ap, int));
	else
		ft_putstr(va_arg(ap, char *));
}

long long int	convert_int(va_list ap, char **opt)
{
	long long int	ret;
	
	if (!ft_strcmp(opt[3], "hh"))
		ret = (signed char)va_arg(ap, int);
	else if (!ft_strcmp(opt[3], "h"))
		ret = (short)va_arg(ap, int);	
	else if (!ft_strcmp(opt[3], "l") || ft_isupper(opt[4][0]))
		ret = va_arg(ap, long);
	else if (!ft_strcmp(opt[3], "ll"))
		ret = va_arg(ap, long long);
	else if (!ft_strcmp(opt[3], "j"))
		ret = va_arg(ap, intmax_t);
	else
		ret = va_arg(ap, ssize_t);
	return (ret);
}

long long int	convert_uint(va_list ap, char **opt)
{
	long long int	ret;

	if (!ft_strcmp(opt[3], "hh"))
		ret = (unsigned char)va_arg(ap, unsigned int);
	else if (!ft_strcmp(opt[3], "h"))
		ret = (unsigned short)va_arg(ap, unsigned int);	
	else if (!ft_strcmp(opt[3], "l") || ft_isupper(opt[4][0]))
		ret = va_arg(ap, intmax_t);
	else if (!ft_strcmp(opt[3], "ll"))
		ret = va_arg(ap, long long);	
	else if (!ft_strcmp(opt[3], "j"))
		ret = va_arg(ap, uintmax_t);
	else
		ret = va_arg(ap, ssize_t);
	return (ret);
}

