/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/07 10:18:27 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/08 15:46:05 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	flags_get(char **fmt, char **opt)
{
	char	*c;
	char	*del;

	(*fmt)++;
	if (*(*fmt) == ' ' || *(*fmt) == '0' || *(*fmt) == '#' || *(*fmt) == '\''
			|| *(*fmt) == '-' || *(*fmt) == '+')
	{
		c = ft_strnew(1);
		c[0] = *(*fmt);
		if (*opt == NULL || ft_strchr(*opt, c[0]) == NULL)
		{
			del = *opt;
			if (!(*opt = ft_strjoin(*opt, c)))
			{
				ft_memdel((void **)&c);
				return ;
			}
			ft_memdel((void **)del);
		}
		ft_memdel((void **)&c);
		return (flags_get(fmt, opt));
	}
	else
		return ;
}
