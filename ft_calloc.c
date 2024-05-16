#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <stddef.h>
#include <string.h>

void    *ft_calloc(size_t elementCount, size_t elementSize )
{
    void    *s;
    s = malloc(sizeof(elementSize) * elementCount);
    if (!(s))
        return (NULL);
    ft_bzero(s, elementCount);
    return(s);
}


/*Cette fonction alloue un bloc de mémoire en 
initialisant tous ces octets à la valeur 0. Bien que relativement proche de la fonction malloc, 
deux aspects les différencient :
*/

/*L'initialisation : calloc met tous les octets du bloc 
à la valeur 0 alors que malloc ne modifie pas la zone de mémoire.*/

/*Les paramètres d'appels : calloc requière deux paramètres (le nombre d'éléments consécutifs 
à allouer et la taille d'un élément) alors que malloc attend la taille totale du bloc à allouer*/
/*void test_calloc(size_t nmemb, size_t size) {
    void *result_libc = calloc(nmemb, size);
    void *result_ft = ft_calloc(nmemb, size);

    // Comparaison des zones de mémoire allouées
    if (memcmp(result_libc, result_ft, nmemb * size) == 0) {
        printf("Test réussi: Les zones de mémoire allouées sont identiques.\n");
    } else {
        printf("Test échoué: Les zones de mémoire allouées sont différentes.\n");
    }

    free(result_libc);
    free(result_ft);
}*/

/*int main() {
    // Test 1: Allocation d'un tableau de 5 entiers
    printf("Test 1: Allocation d'un tableau de 5 entiers\n");
    size_t nmemb1 = 5;
    size_t size1 = sizeof(int);
    test_calloc(nmemb1, size1);

    // Test 2: Allocation d'un tableau de 10 doubles
    printf("\nTest 2: Allocation d'un tableau de 10 doubles\n");
    size_t nmemb2 = 10;
    size_t size2 = sizeof(double);
    test_calloc(nmemb2, size2);

    // Test 3: Allocation d'un tableau de 3 chaînes de caractères
    printf("\nTest 3: Allocation d'un tableau de 3 chaînes de caractères\n");
    size_t nmemb3 = 3;
    size_t size3 = sizeof(char *);
    test_calloc(nmemb3, size3);

    return 0;
}*/