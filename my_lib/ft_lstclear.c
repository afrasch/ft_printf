/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrasch <afrasch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 10:14:18 by afrasch           #+#    #+#             */
/*   Updated: 2021/06/30 12:17:04 by afrasch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*conductor;

	conductor = *lst;
	while (conductor != 0)
	{
		*lst = conductor->next;
		del(conductor->content);
		free(conductor);
		conductor = *lst;
	}
}
