/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/07 10:18:27 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/07 15:13:33 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	flags_get(char **str, char *opt)
{
	char	c;

	(*str)++;
	if (*(*str) == ' ' || *(*str) == '0' || *(*str) == '#' || *(*str) == '\''
			|| *(*str) == '-' || *(*str) == '+')
	{
		c = *(*str);
		if (ft_strchr(opt, c) == NULL)
		{
			if (!(ft_strjoin(opt, &c)))
				return ;
		}
		return (flags_get(str, opt));
	}
	else
		return ;
}
