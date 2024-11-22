/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txavier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:08:30 by txavier           #+#    #+#             */
/*   Updated: 2024/05/30 15:33:25 by txavier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_printp(unsigned long long p, int *len)
{
	if (p == 0)
	{
		ft_putstr("(nil)");
		(*len) += 5;
		return ;
	}
	ft_putstr("0x");
	(*len) += 2;
	ft_printxp(p, len);
}
