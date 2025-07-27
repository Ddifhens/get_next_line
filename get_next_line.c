/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:15:15 by jormanue          #+#    #+#             */
/*   Updated: 2025/07/27 17:57:36 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*swallow(char *waste, char *food)
{
	char	*temp;

	temp = ft_strjoin(waste, food);
	free(waste);
	return(temp);
}
char	*keep(char *str)
{
	char	*kept;
	int		itemsize;
	int		i;

	i = 0;
	itemsize = ft_strlenton(str, 1);
	if (!str)
		return (NULL);
	kept = ft_calloc(itemsize + 2, sizeof(char));
	while (i < itemsize)
	{
		kept[i] = str[i];
		i++;
	}
	if (str[i] && str[i] == '\n')
		kept[i++] = '\n';
	return (kept);
}

char	*readbuf(int fd, char *buffer)
{
	char	*eater;
	int		bitten;

	if (!buffer)
		buffer = ft_calloc(1,1); 
	eater = ft_calloc(BUFFER_SIZE, sizeof(char));
	bitten = 1;
	while (bitten > 0)
	{
		bitten = read(fd, eater, BUFFER_SIZE);
		if (bitten == -1)
		{
			free (eater);
			return (NULL);
		}
		eater[bitten] = '\0';
		buffer = swallow(buffer, eater);
		if (ft_strrchr(eater, '\n'))
			break ;
	}
	free(eater);
	return (buffer);
}
char	*remains(char *str)
{
	char	*remains;
	int		i;
	int		x;

	i = 0;
	x = 0;
	i = ft_strlenton(str, 1);
	if (!str[i])
	{
		free (str);
		return (NULL);
	}
	i++;
	while (str[x + i])
		x++;
	remains = ft_calloc(x + 1, sizeof(char));
	x = 0;
	while (str[x + i])
	{
		remains[x] = str [x + i];
		x++;
	}
	free (str);
	return (remains);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*keeper;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	buffer = (readbuf(fd, buffer));
	if (!buffer)
		return (NULL);
	keeper = keep(buffer);
	buffer = remains(buffer);
	return (keeper);
}
