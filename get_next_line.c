
#include "get_next_line.h"
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*ssize_t read(int fd, void *buf, size_t count)*/
int	ft_checknl(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*get_next_line(int fd)
{
	static char	stash[1024];
	char		buff[1024];
	char		*line;
	int			check;

	check = 0;
	if (fd < 0)
		return (NULL);
	line = malloc(sizeof(char) * 1024);
	*line = '\0';
	if (line == NULL)
		return (NULL);
	if (ft_strlen(stash) > 0)
		ft_clean(stash);
	while (check >= 0 && ft_checknl(stash) != 1)
	{
		check = read(fd, buff, BUFFER_SIZE);
		if (check == -1)
			return (free(line), NULL);
		buff[check] = '\0';
		ft_strcat(stash, buff);
		if (*stash == '\0')
			break ;
	}
	if (check == 0 && ft_strlen(buff) == 0 )
		return (free(line), NULL);
	ft_cpynl(line, stash);
	return (line);
}

// int	main(void)
// {
// 	int		fd;
// 	char	*line;

// 	fd = open("GNL.txt", O_RDONLY);

// 		line = get_next_line(fd);
// 		printf("%s", line);
// 		free(line);
// 		line = get_next_line(fd);
// 		printf("%s", line);
// 		free(line);
// 		line = get_next_line(fd);
// 		printf("%s", line);
// 		free(line);

// }
