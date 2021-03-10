/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 12:02:00 by amanar            #+#    #+#             */
/*   Updated: 2019/04/10 15:54:58 by amanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lit;

	if (lst == NULL)
		return (NULL);
	if (!(lit = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	lit = f(lst);
	if (lst[0].next != NULL)
		lit[0].next = ft_lstmap(lst[0].next, f);
	return (lit);
}
