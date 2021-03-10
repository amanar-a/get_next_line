/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 12:36:27 by amanar            #+#    #+#             */
/*   Updated: 2019/04/09 15:43:14 by amanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t dst_;
	size_t src_;
	size_t j;

	i = 0;
	dst_ = ft_strlen(dst);
	src_ = ft_strlen(src);
	j = dst_;
	if (size < dst_)
		return (size + src_);
	while (src[i] && dst_ < size - 1)
	{
		dst[dst_] = src[i];
		i++;
		dst_++;
	}
	dst[dst_] = '\0';
	return (src_ + j);
}
