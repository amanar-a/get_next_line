/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 11:34:35 by amanar            #+#    #+#             */
/*   Updated: 2019/04/09 14:28:58 by amanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*ch;
	size_t			i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(ch = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (i < len)
	{
		ch[i] = s[start];
		i++;
		start++;
	}
	ch[i] = '\0';
	return (ch);
}
