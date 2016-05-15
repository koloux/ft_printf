/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/11 19:24:20 by nhuber            #+#    #+#             */
/*   Updated: 2016/05/15 13:58:33 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putwstr(wchar_t *ws, int len)
{
	int	i;

	i = 0;
	while (ws[i] && len >= 0)
	{
		if (ws[i] <= 0x7F)
			len -= 1;
		else if (ws[i] <= 0x7FF)
			len -= 2;
		else if (ws[i] <= 0xFFFF)
			len -= 3;
		else
			len -= 4;
		if (len >= 0)
			ft_putwchar(ws[i]);
		i++;
	}
}
