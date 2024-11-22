/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printxp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txavier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:34:38 by txavier           #+#    #+#             */
/*   Updated: 2024/05/30 15:41:10 by txavier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_printxp(unsigned long long n, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (n > 15)
		ft_printxp(n / 16, len);
	ft_putchar(base[n % 16]);
	(*len)++;
}
