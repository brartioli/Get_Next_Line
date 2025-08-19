
#include <fcntl.h>
#include "get_next_line.h"
#include <stdio.h>

int	main (void)
{
	int fd;
	fd = open("teste1char.txt", O_RDONLY);
	char *line;
	if(fd < 0)
		return (1);
	line = get_next_line(fd);
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return(0);
}