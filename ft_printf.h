/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txavier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:25:51 by txavier           #+#    #+#             */
/*   Updated: 2024/05/31 15:34:09 by txavier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_id_format(va_list vl, char format);
int		ft_printf(const char *s, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
void	ft_printp(unsigned long long p, int *len);
void	ft_printxp(unsigned long long n, int *len);
void	ft_puthexa(unsigned int n, char c, int *len);
void	ft_putnbr(int n, int *len);
void	ft_unsigned(unsigned int n, int *len);
#endif
