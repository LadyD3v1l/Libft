/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga <jobraga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:46:27 by jobraga           #+#    #+#             */
/*   Updated: 2025/04/16 13:46:27 by jobraga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_number(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		return (1 + ft_number(n));
	}
	if (n < 10)
		return (1);
	return (1 + ft_number(n / 10));
}

char	*ft_itoa(int n)
{
	char	*num;
	size_t	len;

	len = ft_number(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	num = malloc(sizeof(char) * (len + 1));
	if (!num)
		return (NULL);
	if (n < 0)
	{
		n = n * (-1);
		num[0] = '-';
	}
	if (n == 0)
		num[0] = '0';
	num[len] = '\0';
	while (n > 0 && len > 0)
	{
		num[len - 1] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	return (num);
}

//int		main(void)
//{
//	printf("%s\n", ft_itoa(5575));
//	return (0);
//}
