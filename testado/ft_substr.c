/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:36:41 by jobraga-          #+#    #+#             */
/*   Updated: 2025/04/14 19:39:19 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	char		*temp;

	j = 0;
	if (str[j] == '\0')
		return (NULL);
	i = (size_t)ft_strlen(str);
	if (len == 0 || start > i)
		return (NULL);
	temp = malloc(sizeof(char) + (len + 1));
	while (str[j + start] != '\0' && j < len)
	{
		temp[j] = str[start + j];
		j++;
	}
	temp[j] = '\0';
	return (temp);
}

// int		main(void)
// {
// 	char src[] = "Hello World!!!";

// 	printf ("Essa é a string completa '%s' e vai imprimir da posicao '%i'.
// Ai fica isso '%s'.\n", src, 5, ft_substr(src, 16, 15));
// }
