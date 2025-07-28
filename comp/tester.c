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
	int a;

	//opening small file
	a = 1;
	fd = open("file", O_RDONLY);
	printf("file descriptor:%i\n", fd);
	while (a < 9)
	{
		printf("%i:%s", a, get_next_line(fd));
		a++;
	}
	close(fd);
	// opening big file 
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
	//empty file tests
	a = 1;
	fd = open("empty", O_RDONLY);
	while (a <= 20)
	{
		printf("%i:%s", a, get_next_line(fd));
		a++;
	}
	printf("\n\n");
	// trying tester files trippoullie etc
	a = 1;
	close (fd);
	open("/home/jormanue/francinette/tests/get_next_line/gnlTester/files/alternate_line_nl_with_nl", O_RDONLY);
	while (a <= 10)
	{
		printf("%i:%s", a, get_next_line(fd));
		a++;
	}
	close (fd);
}
