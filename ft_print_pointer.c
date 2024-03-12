/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:21:40 by aranaivo          #+#    #+#             */
/*   Updated: 2024/03/12 15:18:25 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *ptr)
{
	long int	temp;
	int			count;

	temp = (long int)ptr;
	if (!temp)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	ft_putstr("0x");
	count = ft_print_hexa(temp, 'p');
	return (count + 2);
}
