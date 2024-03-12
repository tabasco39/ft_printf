/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 08:18:38 by aranaivo          #+#    #+#             */
/*   Updated: 2024/03/12 16:06:10 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_printunsigned_int(unsigned int nb);
int	ft_print_hexa(unsigned long int nb, char format);
int	ft_putstr(char *s);
int	ft_print_pointer(void *ptr);
int	print_format(char c, va_list arg);
int	ft_putchar(char c);
int	ft_putnbr(int nb);

#endif