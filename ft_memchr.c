#include <stddef.h>
#include <stdio.h>
#include "libft.h"
#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    const char   *str;
    size_t  num;

    if(!s || !c || !n)
        return(NULL);
    num = 0;
    str = (const char   *)s;
    
    if ((char)c == '\0')
        return ((void   *)s + ft_strlen(str));
    while(num <= n)
    {
        if(str[num] == c)
        {
            return ((void   *)s + num);
        }
        num++;
    }
    return(NULL);
}
