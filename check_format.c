/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:47:40 by aranaivo          #+#    #+#             */
/*   Updated: 2024/03/12 16:06:08 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char c, va_list arg)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar(va_arg(arg, int));
	else if (c == 's')
		count = ft_putstr(va_arg(arg, char *));
	else if (c == 'p')
		count = ft_print_pointer(va_arg(arg, void *));
	else if (c == 'd' || c == 'i')
		count = ft_putnbr(va_arg(arg, int));
	else if (c == 'u')
		count = ft_printunsigned_int(va_arg(arg, unsigned int));
	else if (c == 'x' || c == 'X')
		count = ft_print_hexa(va_arg(arg, unsigned long int), c);
	else if (c == '%')
	{
		write(1, &c, 1);
		count = 1;
	}
	return (count);
}
