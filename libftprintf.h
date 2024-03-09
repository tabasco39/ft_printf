/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 08:18:38 by aranaivo          #+#    #+#             */
/*   Updated: 2024/03/09 14:27:06 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

#include <stdarg.h>

int ft_printf(const char *s, ...);
void	ft_printunsigned_int(unsigned int nb);
void ft_print_hexa(unsigned int nb, char format);
char	*ft_strdup(const char *str);

#endif