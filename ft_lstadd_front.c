#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
void ft_lstadd_front(t_list **lst, t_list *new)
{
    if(*lst == NULL)
        new = *lst;
    new->next = (*lst);
}
/*int main(int ac, char **av)
{
    if(ac > 1)
    {
        int i;
        int size;
        i = 0;
        t_list *list[i];
        while(av[i])
        {
            list[i] = ft_lstnew(av[i]);
            if(i > 0)
                ft_lstadd_front(&list[i -1] , list[i]);
            i++;
        }
        size = ft_lstsize(list[i - 1]);
        printf("%d\n" , size);
    }
    
}*/
/*Ajoute l’élément ’new’ au début de la liste*/

/*lst: L’adresse du pointeur vers le premier élément
de la liste.
new: L’adresse du pointeur vers l’élément à
rajouter à la liste.*/
