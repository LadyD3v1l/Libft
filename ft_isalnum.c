/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:41:49 by jobraga-          #+#    #+#             */
/*   Updated: 2025/04/11 15:16:01 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// int		main(void)
// {
// 	printf("%c: %d.\n", 'a', ft_isalnum('a'));
// 	printf("%c: %d.\n", 'Z', ft_isalnum('Z'));
// 	printf("%c: %d.\n", '0', ft_isalnum('0'));
// 	printf("%c: %d.\n", '!', ft_isalnum('!'));
// 	printf("'@': %d.\n", ft_isalnum('@'));
// 	printf("'\t': %d.\n", ft_isalnum('\n'));
// }