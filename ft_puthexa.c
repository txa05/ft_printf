/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txavier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:10:12 by txavier           #+#    #+#             */
/*   Updated: 2024/05/30 16:43:34 by txavier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_puthexa(unsigned int n, char c, int *len)
{
	if (n > 15)
		ft_puthexa(n / 16, c, len);
	if (c == 'X')
		ft_putchar("0123456789ABCDEF"[n % 16]);
	else
		ft_putchar("0123456789abcdef"[n % 16]);
	(*len)++;
}
