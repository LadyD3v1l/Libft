/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:58:25 by jobraga-          #+#    #+#             */
/*   Updated: 2025/04/22 14:22:25 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (n <= dest_len)
		return (n + src_len);
	j = 0;
	while (src[j] && (dest_len + j) < (n - 1))
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';
	return (dest_len + src_len);
}

// int	main()
// {
// 	char *str1 = NULL;
// 	char str2[] = "World.";

// 	printf("Resultado: '%s'\n", str1);
// 	printf("O tamaho de tudo junto é '%ld'.", ft_strlcat(str1, str2, 0));
// }