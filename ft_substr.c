
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>

char    *ft_substr(const char *s, unsigned int start, size_t len)
{
    char    *substr;

    substr = malloc(sizeof(char) * len + 1);
     if (!(substr))  
        return(NULL);
    ft_strlcpy(substr, s + start , len + 1);
    return(substr);
}
/*
void test_substr(const char *s, unsigned int start, size_t len) {
    char *result_libc = strndup(s + start, len);
    char *result_ft = ft_substr(s, start, len);

    // Comparaison des sous-chaînes
    printf("Voici le resultat de la libc : %s\nVoici le resultat de la libft : %s\n" , result_libc ,  result_ft);
    if (strcmp(result_libc, result_ft) == 0) {
        printf("Test réussi: Les sous-chaînes sont identiques.\n");
    } else {
        printf("Test échoué: Les sous-chaînes sont différentes.\n");
    }

    free(result_libc);
    free(result_ft);
}

int main() {
    // Test 1: Extraction d'une sous-chaîne depuis le début
    printf("Test 1: Extraction d'une sous-chaîne depuis le début\n");
    const char *s1 = "Hello, world!";
    unsigned int start1 = 0;
    size_t len1 = 5;
    test_substr(s1, start1, len1);

    // Test 2: Extraction d'une sous-chaîne depuis un index au milieu de la chaîne
    printf("\nTest 2: Extraction d'une sous-chaîne depuis un index au milieu de la chaîne\n");
    const char *s2 = "Hello, world!";
    unsigned int start2 = 7;
    size_t len2 = 5;
    test_substr(s2, start2, len2);

    // Test 3: Extraction d'une sous-chaîne depuis la fin de la chaîne
    printf("\nTest 3: Extraction d'une sous-chaîne depuis la fin de la chaîne\n");
    const char *s3 = "Hello, world!";
    unsigned int start3 = 7;
    size_t len3 = 100; // Longueur plus grande que la chaîne
    test_substr(s3, start3, len3);

    // Test 4: Extraction d'une sous-chaîne vide
    printf("\nTest 4: Extraction d'une sous-chaîne vide\n");
    const char *s4 = "Hello, world!";
    unsigned int start4 = 15; // Index en dehors de la chaîne
    size_t len4 = 0;
    test_substr(s4, start4, len4);

    return 0;
}*/