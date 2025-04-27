/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 03:48:44 by jobraga-          #+#    #+#             */
/*   Updated: 2025/04/27 05:30:04 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}

// int		main(void)
// {
// 	const char s1[] = "Hello World!!!";

// 	printf("Essa é a string...'%s'\n", s1);
// 	printf("Olha um caractere '%c' e olha uma string '%s'.\n", 'W',
//  ft_strrchr(s1, 'W'));
// 	return (0);
// }