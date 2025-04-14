/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:03:29 by jobraga-          #+#    #+#             */
/*   Updated: 2025/01/23 18:40:21 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_number(char x)
{
	write (1, &x, 1);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			ft_number(a / 10 + '0');
			ft_number(a % 10 + '0');
			ft_number(' ');
			ft_number(b / 10 + '0');
			ft_number(b % 10 + '0');
			if (a != 98)
				write (1, ", ", 2);
			b++;
		}
		a++;
		b = a + 1;
	}
}
