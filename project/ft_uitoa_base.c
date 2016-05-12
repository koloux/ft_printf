/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/23 10:07:54 by nhuber            #+#    #+#             */
/*   Updated: 2016/05/12 19:32:20 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int				unblen(unsigned long long int value, int base)
{
	int	size;

	size = 0;
	if (value == 0)
		return (1);
	base *= (base < 0) ? -1 : 1;
	while (value != 0)
	{
		value /= base;
		size++;
	}
	return (size);
}

static char		ubasing(unsigned long long int value, int base)
{
	char	b;

	b = (base < 0) ? 'A' : 'a';
	base *= (base < 0) ? -1 : 1;
	value %= base;
	if (value < 10)
		return (value + '0');
	value %= 10;
	return (b + value);
}

char			*ft_uitoa_base(unsigned long long int value, int base)
{
	char	*res;
	int		size;
	int		i;

	if (value == 0)
		return (ft_strdup("0"));
	else
	{
		size = unblen(value, base);
		if (!(res = (char *)ft_memalloc(size + 1)))
			return (NULL);
		i = size - 1;
		while (value != 0)
		{
			res[i] = ubasing(value, base);
			value /= (base < 0) ? -base : base;
			i--;
		}
		res[size] = '\0';
	}
	return (res);
}
