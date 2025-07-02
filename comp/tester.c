#include <stdio.h>
#include "../get_next_line.h"

int	main(void)
{
	int fd;	
	fd = open("file" , O_RDONLY);
	printf("file descriptor:%i\n", fd);
	printf("return of gnl:%s\n",get_next_line(fd));
}
