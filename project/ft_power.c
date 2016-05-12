/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/11 18:43:40 by nhuber            #+#    #+#             */
/*   Updated: 2016/05/11 15:44:12 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_power(int n, int pow)
{
	if (pow <= 0)
		return (1);
	else if (pow == 1)
		return (n);
	else
		return (n * ft_power(n, pow - 1));
}
