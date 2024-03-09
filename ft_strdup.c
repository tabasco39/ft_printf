/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 23:48:53 by antsa             #+#    #+#             */
/*   Updated: 2024/03/09 14:29:51 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	size_t	i;
	char	*result;

	i = 0;
	len = ft_strlen(str);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	else
	{
		while (str[i])
		{
			result[i] = str[i];
			i++;
		}
	}
	result[i] = '\0';
	return (result);
}

/*
#include <string.h>
#include <stdio.h>
int main()
{
	char str[] = "";
	printf("resultat: %s \n", ft_strdup(str));
	printf("resultat: %s \n", strdup(str));
}
*/