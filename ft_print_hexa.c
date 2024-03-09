/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:13:02 by aranaivo          #+#    #+#             */
/*   Updated: 2024/03/09 14:37:00 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>
#include "libftprintf.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_hexa(unsigned int nb, char format)
{
    char *hexa_base;

    if (format == 'x')
        hexa_base = ft_strdup("0123456789abcd");
    else if (format == 'X')
        hexa_base = ft_strdup("0123456789ABCD");
    if (nb > 15)
    {
       ft_print_hexa(nb / 16, format);
       ft_print_hexa(nb % 16, format); 
    }
    else
    {
        ft_putchar(hexa_base[nb]);
    }
}