/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdembele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 20:00:31 by mdembele          #+#    #+#             */
/*   Updated: 2024/05/22 20:44:44 by mdembele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if (fd == -1)												/* si le fd est incorecte on retourne null*/
		return (NULL);
	line = malloc(sizeof(char) * 1024);     /*malloc de la variable qu'on va renvoyer*/
	*line = '\0';
	if (line == NULL)                      /*si le malloc echoue on renvoie null*/
		return (NULL);
	if (ft_strlen(stash) > 0)              /*si stash n'est pas vide on netoie jusqu'au nl*/
		ft_clean(stash);
	while (check >= 0  && ft_checknl(stash) != 1)
	{
		check = read(fd, buff, BUFFER_SIZE);
		if (check == -1)
			return (free(line), NULL);
		buff[check] = '\0';
		ft_strcat(stash, buff);
		if (*stash == '\0')
			break ;
	}
	if (check == 0 && ft_strlen(buff) == 0)
		return (free(line), NULL);
	ft_cpynl(line, stash);
	return (line);
}
/*
int	main(void)
{
	int		fd;
	char	*line;

	fd = open("GNL.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
}*/
