/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:36:48 by amanar            #+#    #+#             */
/*   Updated: 2019/04/02 15:44:22 by amanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	c_;
	int		pos;

	i = 0;
	c_ = (char)c;
	pos = -1;
	while (s[i])
	{
		if (s[i] == c_)
			pos = i;
		i++;
	}
	if (s[i] == '\0' && c_ == '\0')
		return ((char *)s + i);
	if (pos != -1)
		return ((char *)s + pos);
	return (NULL);
}
