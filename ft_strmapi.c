#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char    *ft_strmapi(char const *s, char (*fonction)(unsigned int, char))
{
    unsigned    int i;
    char    *result;

    if(!(s))
    {
        result = "";
        return(result);
    }
    result = malloc(sizeof(char) * ft_strlen(s));
    i = 0;
    while(s[i])
    {
        result[i] = fonction(i, s[i]);
        i++;
    }
    return(result);
}

/*void test_strmapi(const char *s, char (*f)(unsigned int, char), const char *expected_result) {
    char *result_ft = ft_strmapi(s, f);

    printf("La vraie fonction renvoie : %s et la vôtre renvoie : %s\n", expected_result, result_ft);

    if (strcmp(result_ft, expected_result) == 0) {
        printf("Test réussi: Le résultat de ft_strmapi est correct.\n");
    } else {
        printf("Test échoué: Le résultat de ft_strmapi est incorrect.\n");
    }

    free(result_ft);
}

// Fonction de test pour la fonction de mapping
char map_function(unsigned int i, char c) {
    // Ajoute l'index aux caractères en minuscules
    return c + i;
}

int main() {
    // Test 1: Application de la fonction de mapping à une chaîne non vide
    printf("Test 1: Application de la fonction de mapping à une chaîne non vide\n");
    const char *s1 = "abc";
    const char *expected_result1 = "ace";
    test_strmapi(s1, &map_function, expected_result1);

    // Test 2: Application de la fonction de mapping à une chaîne vide
    printf("\nTest 2: Application de la fonction de mapping à une chaîne vide\n");
    const char *s2 = "";
    const char *expected_result2 = "";
    test_strmapi(s2, &map_function, expected_result2);

    // Test 3: Application de la fonction de mapping à une chaîne avec des caractères spéciaux
    printf("\nTest 3: Application de la fonction de mapping à une chaîne avec des caractères spéciaux\n");
    const char *s3 = "Hello, world!";
    const char *expected_result3 = "Hfnos-rqmve#";
    test_strmapi(s3, &map_function, expected_result3);

    return 0;
}*/