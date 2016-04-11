/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/11 14:50:27 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/11 15:48:27 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_wstrlen(wchar_t *ws)
{
	int		i;
	size_t	wlen;

	i = 0;
	wlen = 0;
	while (ws[i])
	{
		if (ws[i] < 128)
			wlen++;
		else if (ws[i] < 2048)
			wlen += 2;
		else if (ws[i] < 65536)
			wlen += 3;
		else
			wlen += 4;
		i++;	
	}
	return (wlen);
}
