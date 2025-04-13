/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:50:06 by jobraga-          #+#    #+#             */
/*   Updated: 2025/04/11 15:53:58 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int		main(void)
// {
// 	printf("%c: %d.\n", 'a', ft_isprint('a'));
// 	printf("%c: %d.\n", 'Z', ft_isprint('Z'));
// 	printf("%c: %d.\n", '0', ft_isprint('0'));
// 	printf("%c: %d.\n", '!', ft_isprint('!'));
// 	printf("%c: %d.\n", '@', ft_isprint('@'));
// 	printf("%c: %d.\n", '\t', ft_isprint('\t'));
// }