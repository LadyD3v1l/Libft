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

static int	ft_count_words(const char *str, char c)
{
	int		palavra;

	palavra = 0;
	while (*str)
	{
		if (*str == c)
			str++;
		else
		{
			while (*str != c && *str != '\0')
				str++;
			palavra++;
		}
	}
	return (palavra);
}

static size_t	ft_word_len(const char *str, char c)
{
	size_t		len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

static char	*ft_copy_word(const char *str, size_t n)
{
	size_t		i;
	char		*word;

	i = 0;
	word = (char *)malloc(sizeof(char) * (n + 1));
	if (!word)
		return (NULL);
	while (i < n)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	ft_free(char **result, int i)
{
	while (i > 0)
		free(result[--i]);
	free(result);
}

char	**ft_split(char const *str, char c)
{
	char	**result;
	int		cw;
	int		i;

	if (!str)
		return (NULL);
	i = 0;
	cw = ft_count_words(str, c);
	result = malloc(sizeof(char *) * (cw + 1));
	if (!result)
		return (NULL);
	while (*str && *str == c)
		str++;
	while (cw--)
	{
		result[i] = ft_copy_word(str, ft_word_len(str, c));
		if (!result[i])
			return (ft_free(result, i), NULL);
		str += ft_word_len(str, c);
		while (*str && *str == c)
			str++;
		i++;
	}
	result[i] = NULL;
	return (result);
}

//int		main(void)
//{
//	char comp[] = "...Eu.ODEIO.você.SPLIT.";
//	char **arr;
//
//	arr = ft_split(comp, '.');
//	while (*arr)
//	{
//		printf("A : %s.\n", *arr);
//		arr++;
//	}
//	return (0);
//}
