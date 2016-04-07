/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/06 15:29:31 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/06 16:21:54 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_strchrlen(const char *str, int c)
{
	size_t	len;

	len = 0;
	while (*str && *str != (char)c)
	{
		str++;
		len++;
	}
	return (len);
}
