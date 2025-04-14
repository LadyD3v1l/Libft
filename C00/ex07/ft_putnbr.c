/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 17:26:46 by jobraga-          #+#    #+#             */
/*   Updated: 2025/01/23 18:35:24 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_number(char x)
{
	write (1, &x, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_number('-');
		ft_number('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		ft_number('-');
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_number(nb % 10 + '0');
}
