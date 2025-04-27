/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:13:07 by jobraga           #+#    #+#             */
/*   Updated: 2025/04/27 05:38:58 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char const *set, char const c)
{
	size_t		i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_i;
	size_t	len_f;
	char	*rest;

	if (!s1 || !set)
		return (NULL);
	len_i = 0;
	while (s1[len_i] && ft_check(set, s1[len_i]))
		len_i++;
	len_f = ft_strlen(s1) - 1;
	while (len_f != 0 && ft_check(set, s1[len_f]))
		len_f--;
	rest = ft_substr(s1, len_i, (len_f - len_i + 1));
	return (rest);
}

// int		main(void)
// {
// 	char str[] = "abcbcacba   Tenta d.e novo ai    abcbcacba";
// 	char chat[] = "abc";

// 	printf("Essa é a frase completa '%s', tirando os '%s'. 
// 		Fica '%s'.\n", str, chat, ft_strtrim(str, chat));
// }
