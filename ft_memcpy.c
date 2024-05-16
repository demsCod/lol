/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filename.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourname <yourname@student.42.fr>            +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: year/month/day hour:min:sec by yourname   #+#    #+#            */
/*   Updated: year/month/day hour:min:sec by yourname  ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;
	unsigned char		*destx;
	unsigned const char	*srcx;

	srcx = src;
	destx = dest;
	i = 0;
	while(n--)
	{
		destx[i] = srcx[i];
		i++;
	}
	return(dest);
}		

/*
int main (int ac , char **av)
{
	char mot[50];
	ft_memcpy(mot, av[1], 19);
	printf("%s\n", mot);
}*/