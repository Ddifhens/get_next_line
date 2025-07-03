/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:15:15 by jormanue          #+#    #+#             */
/*   Updated: 2025/07/03 15:48:28 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*readbuf(int fd, char *buffer)
{
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	if (read(fd, buffer, BUFFER_SIZE) == 0)
		return (NULL);
	return (buffer);
}

int	checkbreak(char *buffer)
{
	int	i;

	i = 0;
	while (*buffer)
	{
		if (buffer[i++] == '\n')
			return (1);
	}
	return (0);
}
char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*keeper;

	while (checkbreak(buffer) == 0)
	{
		readbuf(fd, buffer);
		keep(buffer, keeper);
	}
}
/*make keep function, to send read buffer to another string, and keep it there while buffer reads more from the file. 
 *using a swap like structure of 
 tmp = malloc str + buffer
 tmp = str 
 free str 
 tmp = buffer 
 free buffer 
 malloc str 
 str = tmp 
 free tmp 
 return str 
 *
 * small functions! 
*/
