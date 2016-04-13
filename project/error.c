/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/08 15:29:56 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/13 17:07:19 by nhuber           ###   ########.fr       */
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

int		error_tags(char **opt)
{
	int	(*tag[2])(char **);
	int i;

	if (opt[4] == NULL)
		return (-1);
	tag[0] = &flags_error;
	tag[1] = &length_error;
	i = 0;
	while (i < 2)
	{
		if (tag[i](opt) == -1)
			return (-1);
		i++;
	}
	return (0);
}
