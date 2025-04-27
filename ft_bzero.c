/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga <jobraga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:16:21 by jobraga-          #+#    #+#             */
/*   Updated: 2025/04/23 17:26:44 by jobraga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*tem;

	i = 0;
	tem = (unsigned char *)s;
	while (i < n)
	{
		tem[i] = '\0';
		i++;
	}
}

// int main()
// {
// 	char str1[5] = "Hello";
// 	char str2[5] = "Hello";
// 	size_t len = 5;

// 	ft_bzero(str1, len);
// 	printf("str1: %s\n", str1);

// 	memset(str2, 0, len);
// 	printf("str2: %s\n", str2);

//     return (0);
// } 