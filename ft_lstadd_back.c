#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
/*****************************************************

typedef struct s_list
{
    void            *content;
    struct  s_list  *next;
}                   t_list;

******************************************************/

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *temp;

    temp = *lst;
    if(*lst == NULL)
    {
        *lst = new;
        return;
    }
    while(temp->next != NULL)
         temp = temp->next;
    temp->next = new;
}

