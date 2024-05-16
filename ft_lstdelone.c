/*  lst: L’élément à free
    del: L’adresse de la fonction permettant de
    supprimer le contenu de l’élément.

    Fonctions externes autorisées
    free

Libère la mémoire de l’élément passé en argument en
utilisant la fonction ’del’ puis avec free(3). La
mémoire de ’next’ ne doit pas être free.*/
#include <stdlib.h>
#include "libft.h"

void    ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if(lst)
        del(lst->content);
    free(lst);
}

