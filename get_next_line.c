/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:15:15 by jormanue          #+#    #+#             */
/*   Updated: 2025/06/18 19:19:53 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*readtillbreak(char *buffer, int fd);
int		checkforbreak(char *str);
int		passalong(char *buffer, char *str);

char	*get_next_line(int fd)
{
	static char	*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	return (readtillbreak(buffer, fd));
}

char	*readtillbreak(char *buffer, int fd)
{
	char	*str;
	int		readed;

	str = NULL;
	buffer = malloc((BUFFER_SIZE + 1) * sizeof (char));
	if (!buffer)
		return (NULL);
	readed = read(fd, buffer, BUFFER_SIZE);
	buffer[readed] = '\0';
	if (readed > 0)
		passalong(buffer, str);
	free(buffer);
	return (str);
}

int	passalong(char *buffer, char *str)
{
	char	*tmp;
	int		i;

	tmp = malloc((BUFFER_SIZE + (sizeof(str)) + 1) * sizeof(char));
	if (str)
	{
		while (str)
		{
			tmp[i] = (*str);
			i++;
			str++;
		}
		free(str);
	}
	while (*buffer)
	{
		if (*buffer == '\n')
			return (1);
		tmp[i] = (*buffer);
		buffer++;
		i++;
	}
	tmp[i] = '\0';
	return (0);
}
