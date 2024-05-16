#include "libft.h"
#include <stdlib.h>

t_list  *ft_lstnew(void *content)
{
    t_list *lstnew;

    lstnew = malloc(sizeof(t_list));
    if(!(lstnew))
        return (NULL);
    lstnew->content = content;
    lstnew->next = NULL;
    return(lstnew);
}
/*Alloue (avec malloc(3)) et renvoie un nouvel
élément. La variable membre ’content’ est
initialisée à l’aide de la valeur du paramètre
’content’. La variable ’next’ est initialisée à
NULL.*/

