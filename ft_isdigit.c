/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:40:28 by jobraga-          #+#    #+#             */
/*   Updated: 2025/04/11 15:46:20 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int		main(void)
// {
// 	printf("%c: %d.\n", 'a', ft_isdigit('a'));
// 	printf("%c: %d.\n", 'Z', ft_isdigit('Z'));
// 	printf("%c: %d.\n", '0', ft_isdigit('0'));
// 	printf("%c: %d.\n", '!', ft_isdigit('!'));
// 	printf("%c: %d.\n", '@', ft_isdigit('@'));
// 	printf("%c: %d.\n", '\t', ft_isdigit('\t'));
// }