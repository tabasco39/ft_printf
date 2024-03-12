/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned_int.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:08:41 by aranaivo          #+#    #+#             */
/*   Updated: 2024/03/12 15:41:07 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned_int(unsigned int nb)
{
	int	counter;

	counter = 0;
	if (nb > 9)
	{
		counter += ft_printunsigned_int(nb / 10) + 1;
		ft_printunsigned_int(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
		counter++;
	}
	return (counter);
}
