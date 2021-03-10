/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 18:17:35 by amanar            #+#    #+#             */
/*   Updated: 2019/04/09 13:49:19 by amanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ch;
	unsigned char	m;

	i = 0;
	ch = (unsigned char *)s;
	m = (unsigned char)c;
	while (i < n)
	{
		if (ch[i] == m)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
