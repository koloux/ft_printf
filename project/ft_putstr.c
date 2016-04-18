/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 02:08:29 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/18 14:41:46 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putstr(char const *s)
{
	int	len;

	len = (int)ft_strchrlen(s, '\0');
	if (printret >= 0 && printret <= (2147483647 - len))
	{
		write(1, s, len);
	}
	else
		printret = -1;
}
