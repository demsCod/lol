#include <stdlib.h>
#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *tab;

    tab = malloc(sizeof (char) * (ft_strlen(s)));
    if(!tab)
        return(NULL);
    tab = (char *)s;
    return(tab);
}
