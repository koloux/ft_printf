/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 15:23:56 by nhuber            #+#    #+#             */
/*   Updated: 2016/05/18 14:00:20 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdlib.h>
# include <limits.h>
# include <stdarg.h>
# include <unistd.h>
# include <wchar.h>
# include <locale.h>
# define BIGGER(x, y) ((x > y) ? x : y)

typedef	struct		s_char
{
	wchar_t			wchar;
	wchar_t			*wstr;
	int				c;
	const char		*str;
}					t_char;

int					ft_printf(char *fmt, ...);
int					ft_strprintcount(const char *str, char c);
int					ft_strchrlen(const char *str, char c);
void				get_tags(char **fmt, char *opt, int *plen);
void				get_flags(char **fmt, char *opt);
int					ft_strindexof(const char *str, char c);
int					ft_isdigit(int c);
int					ft_atoi(const char *str);
int					nblen(long long int value, int base);
int					unblen(unsigned long long int value, int base);
void				get_length(char **fmt, char *opt);
void				convert(va_list ap, char *opt, int *plen, t_char string);
long long int		convert_nb(va_list ap, char c, char *opt);
long long int		convert_int(va_list ap, char opt1, char opt2);
long long int		convert_uint(va_list ap, char opt1, char opt2);
int					ft_isupper(int c);
void				print_str(char *opt, int *plen, t_char string);
void				print_nbr(char *opt, int *plen, long long int nbr);
void				print_opt(char *opt, int *plen, int max, long long int nbr);
int					get_maxstrlen(t_char string, char *opt, int *plen);
int					get_maxnbrlen(long long int nbr, char *opt, int *plen);
char				*ft_itoa_base(long long int value, int base);
char				*ft_uitoa_base(unsigned long long int value, int base);
void				print_base(int base, long long int nbr, char *opt);
char				*ft_strdup(const char *s1);
char				*ft_strnew(size_t size);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
void				ft_bzero(void *s, size_t n);
int					ft_strlen(char const *str);
int					ft_wstrlen(wchar_t *ws, int max);
void				ft_putwchar(wchar_t wc);
void				ft_putwstr(wchar_t *ws, int len);
void				ft_putchar(char c);
void				ft_putlenstr(char const *s, int len);
void				ft_putnchar(char c, int n);
void				ft_putnbr(long long int n);
int					ft_bitgetoctal(int i, unsigned int index);
int					ft_bitgetfour(int i, unsigned int index);
int					ft_power(int n, int pow);
void				set_params(int *plen, char *opt, t_char *string);
void				set_undefined(char **fmt, char *opt, int *plen, int total, int flag);
void				error_tags(char *opt);
void				get_precision(char **fmt, int *plen);
void				error_duplicate(char **fmt, char *opt, int *plen);
void				set_base(char *opt, int *plen);

# include <stdio.h>
#endif
