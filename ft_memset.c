/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:16:49 by jobraga-          #+#    #+#             */
/*   Updated: 2025/04/11 19:08:33 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tem;

	i = 0;
	tem = (unsigned char *)s;
	while (i < n)
	{
		tem[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int		main()
// {
// 	char str[15];

// 	size_t len = 13;
// 	ft_memset(str, 'a', len);
// 	printf("ft_memset: %s\n", str);
// }