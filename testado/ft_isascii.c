/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:32:12 by jobraga-          #+#    #+#             */
/*   Updated: 2025/04/11 15:41:36 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int		main(void)
// {
// 	printf("%c: %d.\n", 'a', ft_isascii('a'));
// 	printf("%c: %d.\n", 'Z', ft_isascii('Z'));
// 	printf("%c: %d.\n", '0', ft_isascii('0'));
// 	printf("%c: %d.\n", '!', ft_isascii('!'));
// 	printf("%c: %d.\n", '@', ft_isascii('@'));
// 	printf("%c: %d.\n", '\t', ft_isascii('\t'));
// }