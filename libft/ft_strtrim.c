/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 15:38:34 by amanar            #+#    #+#             */
/*   Updated: 2019/04/09 14:29:28 by amanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	char	*str;
	int		j;
	int		m;

	i = 0;
	m = 0;
	if (s == NULL)
		return (NULL);
	j = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[j - 1] == ' ' || s[j - 1] == '\n' || s[j - 1] == '\t')
		j--;
	if (j <= 0)
	{
		j = 1;
		i = 1;
	}
	if (!(str = (char *)malloc((j - i + 1) * sizeof(char))))
		return (NULL);
	while (i < j)
		str[m++] = s[i++];
	str[m] = '\0';
	return (str);
}
