/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga <jobraga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:13:07 by jobraga           #+#    #+#             */
/*   Updated: 2025/04/14 19:13:07 by jobraga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_i;
	size_t	len_f;
	char	*rest;

	if (!s1)
		return (NULL);
	len_i = 0;
	len_f = ft_strlen(s1);
	while (s1[len_i++] == set[0])
	{
		if (s1[len_i] != set[0])
			break;
	}
	while (s1[len_f] == set[0])
		len_f--;
	rest = malloc(sizeof(char) * (len_f - len_i + 1));
	if (!rest)
		return (NULL);
	len_f = 0;
	while (s1[len_i + len_f] != set[0])
	{
		rest[len_f] = s1[len_i + len_f];
		len_f++;
	}
	rest[len_f] = '\0';
	return (rest);
}

int		main(void)
{
	char str[] = "......Tenta d.e novo ai    ........";
	char chat[] = ".";

	printf("Essa é a frase completa '%s', tirando os '%s'. Fica '%s'.\n", str, chat, ft_strtrim(str, chat));
}
