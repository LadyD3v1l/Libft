/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:25:30 by jobraga-          #+#    #+#             */
/*   Updated: 2025/04/27 05:35:52 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_c;
	unsigned char	*src_c;

	i = 0;
	dest_c = (unsigned char *)dest;
	src_c = (unsigned char *)src;
	while (i < n)
	{
		dest_c[i] = src_c[i];
		i++;
	}
	return (dest);
}

// int main()
// {
// 	char str1[] = "He";
// 	char str2[] = "Wor";    

// 	size_t len = 6;

// 	printf("Antes da cópia:\n");
// 	printf("str1 (original): %s\n", str1);
// 	ft_memcpy(str2, str1, len);
// 	printf("Após ft_memcpy:\n");
// 	printf("str2 (modificada): %s\n", str2);
// 	return (0);
// }