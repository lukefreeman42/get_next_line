#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"
int main(int argc, char **argv)
{
	int fd = open(argv[1], O_RDONLY);
	char *line;
	int st;
	int linenum = 0; 
	while ((st = get_next_line(fd, &line)))
	{
		linenum += st;
		printf("%s\n %d\n", line, linenum);
	}
	printf("%s\n %d\n", line, linenum);
	return (0);
}