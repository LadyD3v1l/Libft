/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 21:47:18 by jobraga-          #+#    #+#             */
/*   Updated: 2025/04/27 05:42:16 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	if (!*little)
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < n)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (little[j] != '\0' && i + j < n && big[i + j] == little[j])
				j++;
			if (little[j] == '\0')
				return ((char *)(big + i));
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*result;

// 	result = ft_strnstr("abc", "", 3);
// 	printf("%s\n", result);	
// 	result = ft_strnstr("abc", "b", 3);
// 	printf("%s\n", result);	
// 	result = ft_strnstr("abc", "b", 1);
// 	printf("%s\n", result);	
// 	result = ft_strnstr("abc", "d", 3);;
// 	printf("%s\n", result);	
// 	result = ft_strnstr("abc", "a", 0);
// 	printf("%s\n", result);	
// 	result = ft_strnstr("abc", "", 0);
// 	printf("%s\n", result);
// } 