/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 17:56:05 by jobraga-          #+#    #+#             */
/*   Updated: 2025/04/13 18:18:13 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char		*str_c;
	size_t				i;

	i = 0;
	str_c = (unsigned char *)str;
	while (i < n)
	{
		if (str_c[i] != c)
			i++;
		else
			return ((char *)&str_c[i]);
	}
	return (NULL);
}

// int		main(void)
// {
// 	const char sr[] = "Hello World!!";

// 	printf("Olha um caractere '%c' e olha uma string 
// '%p'.\n", 'W', ft_memchr(sr, 'W', 10));
// 	return (0);
// }
