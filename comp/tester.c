/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:51:31 by jormanue          #+#    #+#             */
/*   Updated: 2025/07/03 14:52:40 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../get_next_line.h"

int	main(void)
{
	int	fd;	

	fd = open("file", O_RDONLY);
	printf("file descriptor:%i\n", fd);
	printf("return of gnl:%s\n", get_next_line(fd));
}
