/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 18:40:52 by amanar            #+#    #+#             */
/*   Updated: 2019/04/10 15:54:29 by amanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	const *content, size_t content_size)
{
	t_list	*lit;

	if (!(lit = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		lit[0].content = NULL;
		lit[0].content_size = 0;
	}
	else
	{
		lit[0].content = malloc(content_size);
		ft_memcpy(lit[0].content, content, content_size);
		lit[0].content_size = content_size;
	}
	lit[0].next = NULL;
	return (lit);
}
