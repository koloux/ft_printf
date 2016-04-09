/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/09 11:52:07 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/09 15:44:00 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	width_get(char **fmt, char **opt)
{
	size_t	i;
	size_t	n;

	i = 0;
	ft_memdel((void*)&(*opt));
	while (ft_isdigit((fmt[0][i])))
		i++;
	if (i > 0)
	{
		*opt = ft_strsub(*(fmt), 0, i);
		n = 0;
		while (n++ < i)
			(*fmt)++;
	}
}
