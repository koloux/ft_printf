/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/07 10:18:27 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/08 14:21:17 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	flags_get(char **str, char **opt)
{
	char	*c;
	char	*del;

	(*str)++;
	if (*(*str) == ' ' || *(*str) == '0' || *(*str) == '#' || *(*str) == '\''
			|| *(*str) == '-' || *(*str) == '+')
	{
		c = ft_strnew(1);
		c[0] = *(*str);
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
		return (flags_get(str, opt));
	}
	else
		return ;
}
