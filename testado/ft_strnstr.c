/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 04:09:08 by jobraga-          #+#    #+#             */
/*   Updated: 2025/04/13 19:21:43 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)&big[i]);
	while ((big[i] && little[j]) || i <= n - 1)
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && little[j] != '\0'
				&& (i + j) <= (n - 1))
				j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}

// int		main(void)
// {
// 	char str1[] = "Nao aguento isso!!!";
// 	char str2[] = "aguen";

// 	printf("Achou '%s' em '%s'. Entao vou te dar isso '%s'.\n", 
// str2, str1, ft_strnstr(str1, str2, 5));
// }