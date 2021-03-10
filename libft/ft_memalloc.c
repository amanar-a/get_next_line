/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 10:42:53 by amanar            #+#    #+#             */
/*   Updated: 2019/04/03 15:08:21 by amanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ch;
	size_t	i;

	i = 0;
	if (!(ch = malloc(sizeof(void) * size)))
		return (NULL);
	ft_bzero(ch, size);
	return (ch);
}
