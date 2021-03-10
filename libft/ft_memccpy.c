/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 10:44:08 by amanar            #+#    #+#             */
/*   Updated: 2019/04/05 10:43:20 by amanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*ch1;
	unsigned char	*ch2;
	unsigned char	m;

	i = 0;
	m = (unsigned char)c;
	ch1 = (unsigned char *)dst;
	ch2 = (unsigned char *)src;
	while (n > 0)
	{
		if (ch2[i] == m)
		{
			ch1[i] = ch2[i];
			return (dst + i + 1);
		}
		else
			ch1[i] = ch2[i];
		n--;
		i++;
	}
	return (NULL);
}
