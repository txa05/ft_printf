/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_id_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txavier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:18:36 by txavier           #+#    #+#             */
/*   Updated: 2024/05/30 16:53:18 by txavier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_id_format(va_list vl, char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar((char)va_arg(vl, int));
	else if (format == 's')
		len += ft_putstr((char *)va_arg(vl, char *));
	else if (format == 'i' || format == 'd')
		ft_putnbr((int)va_arg(vl, int), &len);
	else if (format == 'u')
		ft_unsigned(va_arg(vl, unsigned int), &len);
	else if (format == 'p')
		ft_printp(va_arg(vl, unsigned long), &len);
	else if (format == 'x' || format == 'X')
		ft_puthexa(va_arg(vl, unsigned int), format, &len);
	else if (format == '%')
		len += ft_putchar('%');
	return (len);
}
