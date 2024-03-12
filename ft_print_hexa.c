/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:13:02 by aranaivo          #+#    #+#             */
/*   Updated: 2024/03/12 15:13:05 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned long int nb, char format)
{
	char	*hexa_base;
	int		count;

	if (format != 'p')
		nb = (unsigned int)nb;
	count = 0;
	if (format == 'x' || format == 'p')
		hexa_base = "0123456789abcdef";
	else if (format == 'X')
		hexa_base = "0123456789ABCDEF";
	if (nb < 16)
	{
		ft_putchar(hexa_base[nb]);
		count++;
	}
	else
	{
		count += ft_print_hexa(nb / 16, format) + 1;
		ft_putchar(hexa_base[nb % 16]);
	}
	return (count);
}
