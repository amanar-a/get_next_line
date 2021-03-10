/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 15:47:16 by amanar            #+#    #+#             */
/*   Updated: 2019/04/09 16:54:34 by amanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	nb_mot(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] != c && s[i] != '\0')
		{
			if (s[i + 1] == c || s[i + 1] == '\0')
			{
				count++;
			}
			i++;
		}
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (count);
}

static	int	lett(char const *s, char c, int i)
{
	int		j;

	j = 0;
	while (s[i + j])
	{
		if (s[i + j] == c)
			return (j);
		j++;
	}
	return (j);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**str;
	int		k;
	int		m;

	i = -1;
	k = 0;
	if (s == NULL)
		return (NULL);
	if (!(str = (char **)malloc((nb_mot(s, c) + 1) * sizeof(str))))
		return (NULL);
	while (s[++i])
		if (s[i] != c)
		{
			m = 0;
			if (!(str[k] = (char *)malloc((lett(s, c, i) + 1) * sizeof(char))))
				return (NULL);
			while (m < lett(s, c, i - m))
				str[k][m++] = s[i++];
			str[k++][m++] = '\0';
			if (s[i] == '\0')
				break ;
		}
	str[k] = 0;
	return (str);
}
