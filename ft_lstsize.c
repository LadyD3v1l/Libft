/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga <jobraga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:52:07 by jobraga           #+#    #+#             */
/*   Updated: 2025/04/24 17:52:07 by jobraga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*temp;

	i = 0;
	if (!lst)
		return (0);
	temp = lst;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

// int main()
// {
// 	t_list *list = NULL;

// 	ft_lstadd_front(&list, ft_lstnew("primeiro"));
// 	ft_lstadd_front(&list, ft_lstnew("segundo"));
// 	ft_lstadd_front(&list, ft_lstnew("terceiro"));

// 	printf("%d\n", ft_lstsize(list));
// 	return (0);
// } 