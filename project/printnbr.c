/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 14:19:07 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/18 14:49:01 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	printnbr(char **opt, long long int ret)
{
	char	*res;
	int		len;

	if (opt[4][0] == 'd' || opt[4][0] == 'D' || opt[4][0] == 'i')
	{
		len = (int)nblen(ret, 10);
		if (printret >= 0 && (printret < (2147483647 - len)))
		{
			ft_putnbr(ret);
			printret += len;
		}
		else
			printret = -1;
	}
	else
	{
		if (opt[4][0] == 'x' || opt[4][0] == 'X' || opt[4][0] == 'p')
			res = ft_isupper(opt[4][0]) ? ft_itoa_base(ret, -16) : ft_itoa_base(ret, 16);
		if (opt[4][0] == 'o' || opt[4][0] == 'O')
			res = ft_isupper(opt[4][0]) ? ft_itoa_base(ret, -8) : ft_itoa_base(ret, 8);
		ft_putstr(res);
	}
}

void	ft_putnbr(long long int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}
