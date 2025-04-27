/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga <jobraga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 17:56:05 by jobraga-          #+#    #+#             */
/*   Updated: 2025/04/24 23:31:01 by jobraga          ###   ########.fr       */
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
		if (str_c[i] != (unsigned char)c)
			i++;
		else
			return ((void *)&str_c[i]);
	}
	return (NULL);
}

// int		main(void)
// {
// 	const char sr[] = "Hello World!!";

// 	printf("Olha um caractere '%c' e olha uma string '%s'.\n", 'W', 
// 		(char *)ft_memchr(sr, '\0', 10));
// 	return (0);
// }
