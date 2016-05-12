/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/13 14:43:34 by nhuber            #+#    #+#             */
/*   Updated: 2016/05/12 18:28:34 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			convert(va_list ap, char *opt, int *plen, t_char string)
{
	long long int	ret;

	ret = 0;
	if (opt[4] == '%')
		ret = 1;
	else if (opt[4] == 'C' || (opt[3] == 'l' && opt[4] == 'c'))
		string.wchar = va_arg(ap, wchar_t);
	else if (opt[4] == 's' && opt[3] != 'l')
		string.str = va_arg(ap, const char *);
	else if (opt[4] == 'S' || (opt[3] == 'l' && opt[4] == 's'))
		string.wstr = va_arg(ap, wchar_t *);
	else if (opt[4] == 'c')
		string.c = va_arg(ap, int);
	else
		ret = convert_nb(ap, opt[4], opt);
	if (ret < 0 && ft_strindexof("dDi", opt[4]) != -1 &&
			ret != -9223372036854775807 - 1)
	{
		opt[2] = '-';
		ret *= -1;
	}
	if (ft_strindexof("pdDioOuUxX%", opt[4]) != -1)
		print_nbr(opt, plen, ret);
	else
		print_str(opt, plen, string);
}

long long int	convert_nb(va_list ap, char c, char *opt)
{
	long long int	ret;

	if (opt[3] || ft_strindexof("DIOU", opt[4]) != -1)
	{
		if (ft_strindexof("oOuUxX", c) != -1)
			ret = convert_uint(ap, opt[3], opt[4]);
		else
			ret = convert_int(ap, opt[3], opt[4]);
	}
	else
	{
		if (ft_strindexof("di", c) != -1)
			ret = va_arg(ap, int);
		else if (ft_strindexof("ouxX", c) != -1)
			ret = va_arg(ap, unsigned int);
		else
			ret = va_arg(ap, long long);
	}
	return (ret);
}

long long int	convert_uint(va_list ap, char opt1, char opt2)
{
	long long int	ret;

	ret = 0;
	if (opt1 == 'H')
		ret = (unsigned char)va_arg(ap, unsigned int);
	else if (opt1 == 'l' || ft_isupper(opt2))
		ret = va_arg(ap, unsigned long);
	else if (opt1 == 'h')
		ret = (unsigned short)va_arg(ap, unsigned int);
	else if (opt1 == 'L')
		ret = va_arg(ap, unsigned long long);
	else if (opt1 == 'j')
		ret = va_arg(ap, uintmax_t);
	else
		ret = va_arg(ap, size_t);
	return (ret);
}

long long int	convert_int(va_list ap, char opt1, char opt2)
{
	long long int	ret;

	ret = 0;
	if (opt1 == 'H')
		ret = (signed char)va_arg(ap, int);
	else if (opt1 == 'l' || ft_isupper(opt2))
		ret = va_arg(ap, long);
	else if (opt1 == 'h')
		ret = (short)va_arg(ap, int);
	else if (opt1 == 'L')
		ret = va_arg(ap, long long);
	else if (opt1 == 'j')
		ret = va_arg(ap, uintmax_t);
	else
		ret = va_arg(ap, ssize_t);
	return (ret);
}
