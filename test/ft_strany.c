/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strany.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/14 10:40:37 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/14 10:43:40 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_strany(const char *str, const char *any)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (any[j])
		{
			if (str[i] == any[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
