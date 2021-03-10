/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 15:45:06 by amanar            #+#    #+#             */
/*   Updated: 2019/04/02 16:00:58 by amanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*ch;

	i = 0;
	j = 0;
	ch = (char *)haystack;
	if (needle[0] == '\0')
		return (ch);
	while (haystack[i])
	{
		j = 0;
		while (haystack[j + i] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return (ch + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
