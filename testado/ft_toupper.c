/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 02:00:45 by jobraga-          #+#    #+#             */
/*   Updated: 2025/04/12 02:23:52 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

// int		main(void)
// {
// 	char	c;

// 	c = 'E';
// 	printf("O caractere antes da troca '%c'.\n", c);
// 	if (c >= 'a' && c <= 'z')
// 		printf("O caractere após a troca é '%c'.\n", ft_toupper(c));
// 	else 
// 		printf("O caractere se manteve '%c'.\n", c);
// 	return (0);
// }