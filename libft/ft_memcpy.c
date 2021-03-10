/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 10:24:33 by amanar            #+#    #+#             */
/*   Updated: 2019/04/01 19:08:19 by amanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*ch1;
	char	*ch2;

	i = 0;
	ch1 = (char *)dst;
	ch2 = (char *)src;
	while (n > 0)
	{
		ch1[i] = ch2[i];
		n--;
		i++;
	}
	return (dst);
}
