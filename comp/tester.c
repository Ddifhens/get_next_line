/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:51:31 by jormanue          #+#    #+#             */
/*   Updated: 2025/07/30 20:11:23 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../get_next_line.h"

void	bigfile(int fd)
{
	int	a;

	a = 1;
	fd = open("bigfile", O_RDONLY);
	printf("\n\nfile descriptor:%i\n", fd);
	while (a <= 100)
	{
		printf("%i:%s", a, get_next_line(fd));
		a++;
	}
	printf("\n\n");
	close(fd);
}

void	file(int fd)
{
	int	a;

	a = 1;
	fd = open("file", O_RDONLY);
	printf("file descriptor:%i\n", fd);
	while (a < 9)
	{
		printf("%i:%s", a, get_next_line(fd));
		a++;
	}
	close(fd);
}

void	empty(int fd)
{
	int	a;

	a = 1;
	fd = open("empty", O_RDONLY);
	while (a <= 20)
	{
		printf("%i:%s", a, get_next_line(fd));
		a++;
	}
	printf("\n\n");
}

int	main(void)
{
	int	fd;	

	bigfile(fd);
	file(fd);
	empty(fd);
}
