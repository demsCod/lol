#include "libft.h"
int ft_lstsize(t_list *lst)
{
    int i;
    t_list  *temp;

    temp = lst;
    i = 0;
    while(temp != NULL)
    {
        ++i;
        temp = temp->next;
    }
    return(i);
}