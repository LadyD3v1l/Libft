/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:17:24 by jobraga-          #+#    #+#             */
/*   Updated: 2025/04/11 15:41:55 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// int		main(void)
// {
// 	printf("%c: %d.\n", 'a', ft_isalpha('a'));
// 	printf("%c: %d.\n", 'Z', ft_isalpha('Z'));
// 	printf("%c: %d.\n", '0', ft_isalpha('0'));
// 	printf("%c: %d.\n", '!', ft_isalpha('!'));
// 	printf("%c: %d.\n", '@', ft_isalpha('@'));
// 	printf("%c: %d.\n", '\t', ft_isalpha('\n'));
// }