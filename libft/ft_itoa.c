/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 10:37:18 by amanar            #+#    #+#             */
/*   Updated: 2019/04/09 16:53:21 by amanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count(int n)
{
	long	j;
	int		count;

	j = n;
	count = 1;
	if (j < 0)
	{
		j = j * -1;
		count = 2;
	}
	while (j > 9)
	{
		j = j / 10;
		count++;
	}
	return (count);
}

char		*ft_itoa(int n)
{
	long	i;
	int		count;
	char	*str;

	i = n;
	count = ft_count(i);
	if (!(str = (char *)malloc((count + 1) * sizeof(char))))
		return (NULL);
	str[count--] = '\0';
	if (i < 0)
	{
		str[0] = '-';
		i = i * -1;
	}
	while (i > 9)
	{
		str[count--] = (i % 10) + 48;
		i = i / 10;
	}
	str[count] = i + 48;
	return (str);
}
