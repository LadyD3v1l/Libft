/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:44:29 by jobraga-          #+#    #+#             */
/*   Updated: 2025/04/15 16:11:17 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char const *s, char c)
{
	int		i;
	int		palavra;

	i = 0;
	palavra = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			palavra++;
		}
	}
	return (palavra);
}

size_t	ft_worl_len (const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

char **ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		len;

	i = 0;
	if(!s)
		return (NULL);
	result = malloc(sizeof(char) * ft_count_words (s, c) + 1);
	while (s[len])
	{
		while (i < (ft_count_words(s, c) + 1))
		{
			
		}	
	}
	result[i] = '\0';
	return(result);
}

int		main(void)
{
	char comp[] = "......Eu.ODEIO.o.SPLIT.";
	
	printf("%i\n", ft_count_words(comp, '.'));
}
