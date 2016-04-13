/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/06 13:19:21 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/13 09:41:13 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	spec_get(char **fmt, char **opt)
{
	char	*cpy;
	char	*def;
	int		flag;

	flag = 0;
	def = "sSpdDioOuUxXcC";
	while (*def && flag == 0)
	{
		if (*(*fmt) == *def)
			flag++;
		def++;
	}
	if (flag > 0)
	{
		cpy = ft_strnew(1);
		cpy[0] = *(*fmt);
		*opt = cpy;
	}
}
