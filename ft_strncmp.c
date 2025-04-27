/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 02:30:12 by jobraga-          #+#    #+#             */
/*   Updated: 2025/04/25 17:29:21 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && (str1[i] != '\0' || str2[i] != '\0')
		&& i < n - 1)
		i++;
	return (str1[i] - str2[i]);
}

// int		main(void)
// {
// 	char str1[] = "Hello";
// 	char str2[] = "Hello";
// 	char str3[] = "HElo";
// 	char str4[] = "Hh";

// 	printf("Essa é a string inicial '%s' comparado com isso '%s', 
// 		dá isso '%d'.\n", str1, str2, ft_strncmp(str1, str2, 4));
// 	printf("Essa é a string inicial '%s' comparado com isso '%s', 
// 		dá isso '%i'.\n", str1, str3, ft_strncmp(str1, str3, 3));
// 	printf("Essa é a string inicial '%s' comparado com isso '%s', 
// 		dá isso '%d'.\n", str1, str4, ft_strncmp(str1, str4, 2));
// 	return (0);
// }