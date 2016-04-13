/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/07 10:18:27 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/13 11:41:27 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	flags_get(char **fmt, char **opt)
{
	char	*c;
	char	*del;

	ft_memdel((void *)&(*opt));
	while (*(*fmt) == ' ' || *(*fmt) == '0' || *(*fmt) == '#' || *(*fmt) == '-'
			|| *(*fmt) == '+')
	{
		c = ft_strnew(1);
		c[0] = *(*fmt);
		if (*opt == NULL || ft_strchr(*opt, c[0]) == NULL)
		{
			del = *opt;
			if (!(*opt = ft_strjoin(*opt, c)))
			{
				ft_memdel((void *)&c);
				return ;
			}
			ft_memdel((void *)&del);
		}
		ft_memdel((void *)&c);
		(*fmt)++;
	}
}

int		flags_error(char **opt)
{
	if (opt[0] != NULL)
	{
		if (ft_strchr(opt[0], ' ') && ((ft_strchr(opt[0], '#')
						|| ft_strchr(opt[0], '+')) ||
					(opt[4][0] != 'd' && opt[4][0] != 'D' && opt[4][0] != 'i')))
			return (-1);
		if (ft_strchr(opt[0], '#') && (ft_strchr(opt[0], '+') ||
					(opt[4][0] != 'o' && opt[4][0] != 'O' &&
					opt[4][0] != 'x' && opt[4][0] != 'X')))
			return (-1);
		if (ft_strchr(opt[0], '0') && (opt[4][0] == 'p' ||
					opt[4][0] == 'S' || opt[4][0] == 's' ||
					opt[4][0] == 'C' || opt[4][0] == 'c'))
			return (-1);
	}
	return (0);
}
