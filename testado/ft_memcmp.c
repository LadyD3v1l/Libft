/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 17:43:58 by jobraga-          #+#    #+#             */
/*   Updated: 2025/04/13 17:54:04 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_c;
	unsigned char	*s2_c;

	i = 0;
	s1_c = (unsigned char *)s1;
	s2_c = (unsigned char *)s2;
	while (i < n - 1 && s1_c[i] == s2_c[i] && (s1_c[i] || s2_c[i]))
		i++;
	return (s1_c[i] - s2_c[i]);
}

// int		main(void)
// {
// 	char str1[] = "Hello";
// 	char str2[] = "Hello";
// 	char str3[] = "HElo";
// 	char str4[] = "Hh";

// 	printf("Essa é a string inicial '%s' comparado com isso '%s',
//  dá isso '%d'.\n", str1, str2, ft_memcmp(str1, str2, 4));
// 	printf("Essa é a string inicial '%s' comparado com isso '%s',
//  dá isso '%i'.\n", str1, str3, ft_memcmp(str1, str3, 3));
// 	printf("Essa é a string inicial '%s' comparado com isso '%s',
//  dá isso '%d'.\n", str1, str4, ft_memcmp(str1, str4, 2));
// 	return (0);
// }