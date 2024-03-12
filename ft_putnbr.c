/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 07:16:29 by aranaivo          #+#    #+#             */
/*   Updated: 2024/03/12 16:02:45 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	display_integer(int nb, int *count)
{
	if (nb > 9)
	{
		*count += ft_putnbr(nb / 10) + 1;
		ft_putchar((nb % 10) + '0');
	}
	else
	{
		ft_putchar(nb + '0');
		(*count)++;
	}
}

int	ft_putnbr(int nb)
{
	int	count;
	int	is_negative;

	count = 0;
	is_negative = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (nb < 0)
	{
		is_negative = 1;
		ft_putchar('-');
		nb *= -1;
	}
	display_integer(nb, &count);
	return (count + is_negative);
}
