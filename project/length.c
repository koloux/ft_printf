/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/09 15:50:42 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/09 19:00:28 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	length_get(char **fmt, char **opt)
{
	ft_memdel((void *)&(*opt));
	if (*(*fmt) == 'h' || *(*fmt) == 'l' || *(*fmt) == 'j' || *(*fmt) == 'z')
	{
		if (*(*fmt + 1) == 'h' || *(*fmt + 1) == 'l')
		{
			*opt = ft_strsub(*fmt, 0, 2);
			(*fmt)++;
		}
		else
			*opt = ft_strsub(*fmt, 0, 1);
		(*fmt)++;
	}
}
