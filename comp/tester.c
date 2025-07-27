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
	printf("printing 20 lines\n1: %s\n", get_next_line(fd));
	printf("2: %s\n", get_next_line(fd));
	printf("3: %s\n", get_next_line(fd));
	printf("4: %s\n", get_next_line(fd));
	printf("5: %s\n", get_next_line(fd));
	printf("6: %s\n", get_next_line(fd));
	printf("7: %s\n", get_next_line(fd));
	printf("8: %s\n", get_next_line(fd));
	printf("9: %s\n", get_next_line(fd));
	printf("10: %s\n", get_next_line(fd));
	printf("11: %s\n", get_next_line(fd));
	printf("12: %s\n", get_next_line(fd));
	printf("13: %s\n", get_next_line(fd));
	printf("14: %s\n", get_next_line(fd));
	printf("15: %s\n", get_next_line(fd));
	printf("16: %s\n", get_next_line(fd));
	printf("17: %s\n", get_next_line(fd));
	printf("18: %s\n", get_next_line(fd));
	printf("19: %s\n", get_next_line(fd));
	printf("20: %s\n\nChanging Files\n\n", get_next_line(fd));
	
	fd = open("bigfile", O_RDONLY);
	printf("file descriptor:%i\n", fd);
	printf("printing 20 lines\n1: %s\n", get_next_line(fd));
	printf("2: %s\n", get_next_line(fd));
	printf("3: %s\n", get_next_line(fd));
	printf("4: %s\n", get_next_line(fd));
	printf("5: %s\n", get_next_line(fd));
	printf("6: %s\n", get_next_line(fd));
	printf("7: %s\n", get_next_line(fd));
	printf("8: %s\n", get_next_line(fd));
	printf("9: %s\n", get_next_line(fd));
	printf("10: %s\n", get_next_line(fd));
	printf("11: %s\n", get_next_line(fd));
	printf("12: %s\n", get_next_line(fd));
	printf("13: %s\n", get_next_line(fd));
	printf("14: %s\n", get_next_line(fd));
	printf("15: %s\n", get_next_line(fd));
	printf("16: %s\n", get_next_line(fd));
	printf("17: %s\n", get_next_line(fd));
	printf("18: %s\n", get_next_line(fd));
	printf("19: %s\n", get_next_line(fd));
	printf("20: %s\n", get_next_line(fd));
	
}
