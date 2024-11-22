/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txavier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:23:03 by txavier           #+#    #+#             */
/*   Updated: 2024/05/30 11:56:15 by txavier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	vl;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(vl, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			len += ft_id_format(vl, s[i + 1]);
			i++;
		}
		else
			len += ft_putchar(s[i]);
		i++;
	}
	va_end(vl);
	return (len);
}
