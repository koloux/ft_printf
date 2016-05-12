/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlenstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 02:08:29 by nhuber            #+#    #+#             */
/*   Updated: 2016/05/12 11:29:38 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putlenstr(char const *s, int len)
{
	if (len != -1)
	{
		if (!s)
			ft_putlenstr("(null)", 6);
		write(1, s, len);
	}
}