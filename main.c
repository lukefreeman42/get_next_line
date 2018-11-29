#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int fd;
	int fd2;
	int status1;
	char *line;

	status1 = 1;
	fd = open(argv[1], O_RDONLY);
	while (status1)
	{
		status1 = get_next_line(fd, &line);
		if (status1 == -1)
			return (-1);
			printf("%s\n", line);
			free(line);
	}
	return (0);
}
