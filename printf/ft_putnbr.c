/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txavier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 09:38:17 by txavier           #+#    #+#             */
/*   Updated: 2024/05/30 11:14:37 by txavier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr(int n, int *len)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) += 11;
		return ;
	}
	else if (n < 0)
	{
		ft_putchar('-');
		(*len)++;
		ft_putnbr((n * -1), len);
	}
	else if (n > 9)
	{
		ft_putnbr((n / 10), len);
		ft_putchar((n % 10) + '0');
		(*len)++;
	}
	else
	{
		ft_putchar(n + '0');
		(*len)++;
	}
}
