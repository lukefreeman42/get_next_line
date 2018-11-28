#include <fcntl.h>
#include <unistd.h>


int	main(int argc, char **argv)
{
	int fd;
	char **line;

	line = (char**)malloc(1);

	fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, line))
	{
		printf("%s\n", *line);
		free(*line);
	}
	return (0);
}
