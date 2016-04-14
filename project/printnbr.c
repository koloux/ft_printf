/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 14:19:07 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/14 14:32:23 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	printnbr(char **opt, long long int ret)
{
	char	*res;

	if (opt[4][0] == 'd' || opt[4][0] == 'D' || opt[4][0] == 'i')
		ft_putnbr(ret);
	if (opt[4][0] == 'x' || opt[4][0] == 'X')
	{
		res = ft_isupper(opt[4][0]) ? ft_itoa_base(ret, -16) : ft_itoa_base(ret, 16);
		ft_putstr(res);
	}
	if (opt[4][0] == 'o' || opt[4][0] == 'O')
	{
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
