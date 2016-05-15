/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/23 13:52:28 by nhuber            #+#    #+#             */
/*   Updated: 2016/05/15 17:23:50 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	set_params(int *plen, char *opt, t_char *string)
{
	int	i;

	i = 0;
	while (i < 5)
	{
		if (i < 3)
			plen[i] = 0;
		opt[i] = 0;
		i++;
	}
	(*string).wchar = 0;
	(*string).wstr = 0;
	(*string).c = 0;
	(*string).str = 0;
}

void	set_undefined(char *opt, int *plen, int total)
{
	int	i;

	if ((opt[4] == 'c' || opt[4] == 's') && !plen[1])
		plen[1] = -1;
	i = plen[0] - ((total < 0) ? 1 : total);
	if (opt[1] == '0')
		ft_putnchar('0', i);
	else if ((opt[2] == ' ' || (!opt[2])) && !opt[1])
		ft_putnchar(' ', i);
	if (plen[0] != 0 && total < 0)
		plen[3] += plen[0] + total;
}

void	set_color(char *fmt, int *plen)
{
	(void)fmt;
	(void)plen;
}
