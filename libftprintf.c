/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 08:17:53 by aranaivo          #+#    #+#             */
/*   Updated: 2024/03/09 15:51:23 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "./libft/libft.h"
#include "libftprintf.h"
#include <stdio.h>

int ft_printf(const char *s, ...)
{
	va_list ap;
	int     counter;    

	counter = 0;
	va_start(ap, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			if (*s == 'c')
			{
				ft_putchar_fd(va_arg(ap, int), 1);
				counter++;
			}
			if (*s == 's')
			{
				ft_putstr_fd(va_arg(ap, char *), 1);
				counter++;
			}
			if (*s == 'd' || *s == 'i')
			{
				ft_putnbr_fd(va_arg(ap, int), 1);
				counter++;
			}
			if (*s == 'u')
			{
				ft_printunsigned_int(va_arg(ap, unsigned int));
				counter++;
			}
			if (*s == 'x' || 'X')
			{
				ft_print_hexa(va_arg(ap, unsigned int), *s);
				counter++;
			}
			if (*s == '%');
			{
				write(1, &*s, 1);
				counter++;
			}
			if (*s == 'p')
			{
				unsigned int address = (unsigned int)s;
				printf("adr ==> %u", address);
			}
		}
		else
		{
			ft_putchar_fd(*s, 1);   
		}
		s++;
	}
	return (counter);
}

int main()
{
	ft_printf("hello %p \n", 10);
	printf("********************** \n");
	printf("hello: %p \n", 10);
}