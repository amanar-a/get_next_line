/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:01:42 by amanar            #+#    #+#             */
/*   Updated: 2019/04/04 14:23:05 by amanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ch;

	i = 0;
	ch = (char *)haystack;
	if (needle[0] == '\0')
		return (ch);
	while (ch[i] && i < len)
	{
		j = 0;
		while (needle[j] == ch[j + i] && (j + i) < len)
		{
			if (needle[j + 1] == '\0')
				return (ch + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
