

/*************************************************************************************** 
    lst: L’adresse du pointeur vers un élément.
    f: L’adresse de la fonction à appliquer.
    del: L’adresse de la fonction permettant de supprimer le contenu d’un élément.

    Valeur de retour :  La nouvelle liste.
                        NULL si l’allocation échoue
Fonctions externes autorisées  : malloc, free
****************************************************************************************/
/***************************************************************************************
    Itère sur la liste ’lst’ et applique la fonction
    ’f ’au contenu de chaque élément. Crée une nouvelle
    liste résultant des applications successives de
    ’f’. La fonction ’del’ est là pour détruire le
    contenu d’un élément si nécessaire.
***********************************************************************************/
#include <stdlib.h>
#include "libft.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>


t_list  *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list  *node;
    t_list  *list;

    if(!lst || !f || !del)
        return (NULL);
    list = NULL;
    while(lst)
    {
       node = ft_lstnew(f(lst->content));
       if(!node)
       {
            ft_lstclear(&list, del);
            return(NULL);
       }
       ft_lstadd_back(&list, node);
       lst = lst->next;
    }
    return(list);
}

/*t_list *map_function(t_list *elem) {
    // Multiplie le contenu de chaque élément par 2 et crée un nouvel élément avec la valeur modifiée
    int value = *((int *)elem->content) * 2;
    return create_new_element(value);
}

int main(void)
{
    t_list  *node0;
    t_list  *node1;
    t_list  *node2;
    t_list  *node3;
    t_list  *node4;

    node0->content = "zero";
    node0->next = node1;
    node1->content = "one";
    node1->next = node2;
    node2->content = "two";
    node2->next = node3;
    node3->content = "three";
    node3->next = node4;
    node4->content = "four";
    node0->next = NULL;

    t_list *result = ft_lstmap(node0, )
}*/