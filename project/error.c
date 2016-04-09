/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/08 15:29:56 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/09 09:27:55 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		error_convert(char *fmt)
{
	int		flag;
	char	*spec;
	int		i;

	flag = 0;
	spec = "sSpdDioOuUxXcC";
	while (*fmt && flag == 0)
	{
		i = 0;
		while (spec[i])
		{
			if (*fmt == spec[i++])
				flag++;
		}
		fmt++;
	}
	return (flag);
}
