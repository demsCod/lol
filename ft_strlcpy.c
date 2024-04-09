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

#include "libft.h"
#include <stddef.h>
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	sizesrc;
	size_t	destsize;
	int	i;

	if (!dest || !src)
		return (0);

	destsize = ft_strlen(dest);
	sizesrc = ft_strlen(src);

	i = 0;
	if(destsize > 0)
	{
		while(src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return(sizesrc);
}
