/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:25:07 by jrobles-          #+#    #+#             */
/*   Updated: 2022/07/28 14:25:09 by jrobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdarg.h>

int			ft_printf(const char *format, ...);
int			ft_format(va_list args, const char format);
int			ft_putchar(int c);
int			ft_putstr(char *str);
int			ft_putptr(unsigned long long ptr);
int			ft_printnbr(int n);
int			ft_unsigned(unsigned int n);
int			ft_puthexa(unsigned int num, const char format);

char		*ft_itoa(int n);
int			ft_num_len(unsigned	int num);
char		*ft_uitoa(unsigned int n);
int			ft_hex_len(unsigned	int num);
void		ft_put_hex(unsigned int num, const char format);
int			ft_ptr_len(uintptr_t num);
void		ft_put_ptr(uintptr_t num);

#endif