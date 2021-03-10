/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 13:52:36 by amanar            #+#    #+#             */
/*   Updated: 2019/04/02 14:44:38 by amanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	c_;

	i = 0;
	c_ = (char)c;
	while (s[i])
	{
		if (s[i] == c_)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == '\0' && c_ == '\0')
		return ((char *)s + i);
	return (NULL);
}
