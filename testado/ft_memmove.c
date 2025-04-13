/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:43:12 by jobraga-          #+#    #+#             */
/*   Updated: 2025/04/13 19:42:50 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*src_c;
	char	*dest_c;
	size_t	i;

	i = 0;
	src_c = (char *) src;
	dest_c = (char *) dest;
	if (dest_c > src_c)
	{
		while (len > 0)
		{
			len--;
			dest_c[len] = src_c[len];
		}
	}
	else
	{
		while (i < len)
		{
			dest_c[i] = src_c[i];
			i++;
		}
	}
	return (dest);
}
