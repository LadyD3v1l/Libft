/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 02:23:00 by jobraga-          #+#    #+#             */
/*   Updated: 2025/04/12 02:26:04 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = 32 + c;
	return (c);
}

// int		main(void)
// {
// 	char	c;

// 	c = 'a';
// 	printf("O caractere antes da troca '%c'.\n", c);
// 	if (c >= 'A' && c <= 'Z')
// 		printf("O caractere após a troca é '%c'.\n", ft_tolower(c));
// 	else 
// 		printf("O caractere se manteve '%c'.\n", c);
// 	return (0);
// }