/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 15:19:30 by amanar            #+#    #+#             */
/*   Updated: 2019/04/02 10:37:09 by amanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	ch;
	char			*src;
	unsigned long	i;

	i = 0;
	src = (char *)b;
	ch = (unsigned char)c;
	while (i < len)
	{
		src[i] = ch;
		i++;
	}
	return (b);
}
