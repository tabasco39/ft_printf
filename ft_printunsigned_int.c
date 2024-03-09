/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned_int.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:08:41 by aranaivo          #+#    #+#             */
/*   Updated: 2024/03/09 13:36:15 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printunsigned_int(unsigned int nb)
{
	if (nb > 9)
	{
		ft_printunsigned_int(nb / 10);
		ft_printunsigned_int(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}