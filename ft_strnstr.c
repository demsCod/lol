#include <stddef.h>
#include "libft.h"
#include <stdio.h>
#include <string.h>

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    i = 0;

    if (ft_strlen(little) == 0)
        return((char  *)big);

    while(i < len)
    {
        if(strncmp(big, little, strlen(little)) == 0)
        {
            return((char    *)big + i);
        } 
        i++;
        big++;  
    }
    return(NULL);
}
/*If little is an empty string, big is returned; if little	occurs nowhere
in big, NULL is returned; otherwise a pointer to the first character of
the first occurrence of little is returned.*/

// Fonction de test pour ft_strnstr
/*void test_strnstr(const char *haystack, const char *needle, size_t len) {
    char *result_libc = strstr(haystack, needle);
    char *result_ft = ft_strnstr(haystack, needle, len);

    printf("La vraie fonction renvoie : %s et la vôtre renvoie : %s\n", result_libc, result_ft);

    if ((result_libc == NULL && result_ft == NULL) || strcmp(result_libc, result_ft) == 0) {
        printf("Test réussi: Les résultats des deux fonctions correspondent.\n");
    } else {
        printf("Test échoué: Les résultats des deux fonctions ne correspondent pas.\n");
    }
}

int main() {
    // Test 1: Recherche d'une sous-chaîne présente dans la chaîne
    printf("Test 1: Recherche d'une sous-chaîne présente dans la chaîne\n");
    const char *haystack1 = "Hello, world!";
    const char *needle1 = "world";
    test_strnstr(haystack1, needle1, strlen(haystack1));

    // Test 2: Recherche d'une sous-chaîne absente de la chaîne
    printf("\nTest 2: Recherche d'une sous-chaîne absente de la chaîne\n");
    const char *haystack2 = "Hello, world!";
    const char *needle2 = "test";
    test_strnstr(haystack2, needle2, strlen(haystack2));

    // Test 3: Recherche d'une sous-chaîne vide
    printf("\nTest 3: Recherche d'une sous-chaîne vide\n");
    const char *haystack3 = "Hello, world!";
    const char *needle3 = "";
    test_strnstr(haystack3, needle3, strlen(haystack3));

    // Test 4: Recherche dans une chaîne vide
    printf("\nTest 4: Recherche dans une chaîne vide\n");
    const char *haystack4 = "";
    const char *needle4 = "test";
    test_strnstr(haystack4, needle4, strlen(haystack4));

    // Test 5: Recherche d'une sous-chaîne avec une longueur plus grande que la chaîne de recherche
    printf("\nTest 5: Recherche d'une sous-chaîne avec une longueur plus grande que la chaîne de recherche\n");
    const char *haystack5 = "Hello";
    const char *needle5 = "Hello, world!";
    test_strnstr(haystack5, needle5, strlen(haystack5));

    return 0;
}*/