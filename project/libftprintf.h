/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 15:23:56 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/07 16:32:01 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

/*
 * printf functions
 */

int	ft_printf(char *fmt, ...);
void	spec_get(char **str, char *opt);
void	flags_get(char **str, char *opt);

/*
 * library functions
 */

char	*ft_strnew(size_t size);
size_t	ft_strchrlen(const char	*str, int c);
int	ft_strindexof(const char *str, int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strcpy(char *dst, const char *src);

void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	ft_bzero(void *s, size_t n);

void	ft_putchar(char c);
void	ft_putstr(char const *str);
void	ft_putnbr(int n);

# endif
