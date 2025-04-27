/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:36:41 by jobraga-          #+#    #+#             */
/*   Updated: 2025/04/22 14:22:47 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t		j;
	char		*temp;

	j = 0;
	if (!str)
		return (NULL);
	if (len == 0 || start > ft_strlen(str))
	{
		temp = malloc(1);
		temp[0] = '\0';
		return (temp);
	}
	if (len <= ft_strlen(str) - start)
		temp = malloc(len + 1);
	else
		temp = malloc (ft_strlen(str) - start + 1);
	while (str[j + start] && j < len && start < ft_strlen(str))
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
//  Ai fica isso '%s'.\n", src, 5, ft_substr(src, 5, 15));
// }
