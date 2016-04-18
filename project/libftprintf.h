/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 15:23:56 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/18 14:21:29 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <wchar.h>
# include <locale.h>

int		printret;

#include <stdio.h>
/*
 * printf functions
 */
int		ft_printf(char *fmt, ...);
void	spec_get(char **fmt, char **opt);
void	flags_get(char **fmt, char **opt);
void	width_get(char **fmt, char **opt);
void	precision_get(char **fmt, char **opt);
void	length_get(char **fmt, char **opt);

void	convert(va_list ap, char **opt);
long long int	convert_int(va_list ap, char **opt);
long long int	convert_uint(va_list ap, char **opt);
void	convert_char(va_list ap, char **opt);

int		error_convert(char *fmt);
int		error_tags(char **opt);
int		length_error(char **opt);
int		flags_error(char **opt);
/*
 * library functions
 */
char	*ft_strnew(size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strcpy(char *dst, const char *src);
size_t	ft_strchrlen(const char	*str, int c);
int		ft_strindexof(const char *str, int c);
int		ft_strcmp(const char *s1, const char *s2);

void	ft_putwchar(wchar_t wc);
void	ft_putwstr(wchar_t *ws);

void	ft_putchar(char c);
void	ft_putstr(char const *str);

void	ft_putnbr(long long int n);
void	printnbr(char **opt, long long int ret);

void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	ft_bzero(void *s, size_t n);

int		ft_bitgetoctal(int i, unsigned int index);
int		ft_bitgetfour(int i, unsigned int index);

int		ft_isdigit(int c);
int		ft_isupper(int c);
int		ft_power(int n, int pow);
size_t	nblen(long long int value, int base);
char	*ft_itoa_base(long long int value, int base);
# endif
