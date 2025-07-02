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
/*char	*get_next_line(int fd)
{
	char	*buf;
}
*/
int	main(void)
{
	int	fd;
	char	*buffer;

	buffer = NULL;
	fd = open("file", O_RDONLY);
	read(fd, buffer, 20);
	printf("%s", buffer);
}

