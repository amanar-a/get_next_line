/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 10:57:38 by amanar            #+#    #+#             */
/*   Updated: 2019/04/09 13:48:42 by amanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ch1;
	char	*ch2;
	size_t	i;

	i = 0;
	ch1 = (char *)dst;
	ch2 = (char *)src;
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			ch1[len] = ch2[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
