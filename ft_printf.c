/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 08:09:38 by aranaivo          #+#    #+#             */
/*   Updated: 2024/03/12 16:05:19 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		counter;

	counter = 0;
	va_start(ap, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			counter += print_format(*s, ap);
		}
		else
		{
			ft_putchar(*s);
			counter++;
		}
		s++;
	}
	return (counter);
}
