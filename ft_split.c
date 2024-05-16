#include "libft.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

static  size_t ft_strwordlen(char  *str, char set)
{
    size_t i;

    i = 0;
    while(str[i] && str[i] != set)
    {
        i++;
    }
    printf("La valeur de strwordlen est %ld\n", i);
    return(i);
}

static  size_t ft_countword(char *str, char set)
{
    int i;
    size_t nword;
    int ammo;

    i = 0;
    nword = 0;
    ammo = 1;
    while(str[i])
    {
        if(ammo == 1 && str[i] != set)
        {
            nword++;
            ammo = 0;
        }
        if(str[i] == set)
            ammo = 1;
        i++;
    }
    return(nword);
}
char    **ft_split(char *str, char set)
{
    size_t     ntab;
    char    **ssplit;
    int i;
    int j;

    j = 0;
    if(str == NULL)
    {
        ssplit = malloc(sizeof (char*));
        if(ssplit == NULL)
            return (NULL);
        ssplit[0] = NULL;
        return(NULL);
    }
    while(*str == set)
        str++;
    ntab = ft_countword(str, set);
    ssplit = malloc((ntab + 1) * sizeof(char*));
    if (ssplit == NULL)
        return(NULL);
    while(*str)
    {
        i = 0;
        ssplit[j] = malloc(sizeof(char) * ft_strwordlen(str, set) + 1);
        if(ssplit == NULL)
            return(NULL);
        while(*str != set && *str)
        {
            ssplit[j][i] = *str;
            str++;
            i++;
        }
        if(*str)
            str++;
        ssplit[j][i] = '\0';
        j++;    
    }
    ssplit[j] = (NULL);
    return(ssplit);
}
/*
int main (int ac, char **av)
{
    if(ac == 3)
    {
        char **test;
        int  j;

        j = 0;
        test = ft_split(av[1], av[2][0]);
        while(test[j])
        {
            printf("%s\n" , test[j]);
            j++;
        }
        free(test);
    }
}*/