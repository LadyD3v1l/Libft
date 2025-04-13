/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 03:07:12 by jobraga-          #+#    #+#             */
/*   Updated: 2025/04/12 03:25:30 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] != c)
			i++;
		else
			return ((char *)&str[i]);
	}
	return (NULL);
}

// int		main(void)
// {
// 	const char s1[] = "Hello World!!!";

// 	printf("Essa é a string...'%s'\n", s1);
// 	printf("Olha um caractere '%c' e olha uma string '%s'.\n", 'W', 
// ft_strchr(s1, 'W'));
// 	return (0);
// }