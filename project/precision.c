/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/09 14:34:09 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/13 11:56:34 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	precision_get(char **fmt, char **opt)
{
	size_t	i;
	size_t	n;

	ft_memdel((void *)&(*opt));
	if (*(*fmt) != '.')
	{
		return ;
	}
	else
	{
		i = 1;
		while (ft_isdigit(fmt[0][i]))
			i++;
		*opt = ft_strsub(*(fmt), 0, i);
		n = 0;
		while (n++ < i)
			(*fmt)++;
	}
}

int		precision_error(char **opt)
{
	//verify global total
	//total + precision must be lower than max_int

	(void)opt;
	return (1);
}
