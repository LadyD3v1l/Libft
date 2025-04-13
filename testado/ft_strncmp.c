/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 02:30:12 by jobraga-          #+#    #+#             */
/*   Updated: 2025/04/12 02:44:12 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0') && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
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