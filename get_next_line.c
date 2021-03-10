/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 15:24:09 by amanar            #+#    #+#             */
/*   Updated: 2019/06/22 15:19:22 by amanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int					get_line(char **dest, char **line, int i, int fd)
{
	char			*tmp;

	if ((*line = ft_strsub(dest[fd], 0, i)) == NULL)
		return (-1);
	tmp = dest[fd];
	if (dest[fd][i] == '\n')
	{
		if ((dest[fd] = ft_strdup(dest[fd] + i + 1)) == NULL)
			return (-1);
	}
	else
		dest[fd] = NULL;
	ft_strdel(&tmp);
	return (1);
}

int					count(char *dest)
{
	int				i;

	i = 0;
	while (dest[i] != '\n' && dest[i] != '\0')
		i++;
	return (i);
}

int					get_next_line(const int fd, char **line)
{
	static char		*dest[4864];
	char			buff[BUFF_SIZE + 1];
	int				size;
	char			*tmp;

	if (fd < 0 || fd > 4864 || read(fd, buff, 0) < 0)
		return (-1);
	if (!dest[fd])
		if ((dest[fd] = ft_strnew(0)) == NULL)
			return (-1);
	while (!ft_strchr(dest[fd], '\n') && (size = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[size] = '\0';
		tmp = dest[fd];
		if ((dest[fd] = ft_strjoin(dest[fd], buff)) == NULL)
			return (-1);
		ft_strdel(&tmp);
	}
	if (dest[fd][0] == '\0' && size < 1)
	{
		ft_strdel(&dest[fd]);
		return (size);
	}
	return (get_line(dest, line, count(dest[fd]), fd));
}
