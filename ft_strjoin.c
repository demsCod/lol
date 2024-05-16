#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

char    *ft_strjoin(const char *s1, const char *s2)
{
    char    *strjoin;

    strjoin = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
    if(!(strjoin))
        return(NULL);
    ft_strlcpy(strjoin, s1, ft_strlen(s1) + 1);
    ft_strlcat(strjoin, (char   *)s2, ft_strlen(s1) + ft_strlen(s2) + 1);
    return(strjoin);
}

void test_strjoin(const char *s1, const char *s2, const char *expected_result) {
    char *result_ft = ft_strjoin(s1, s2);

    printf("La vraie fonction renvoie : %s et la vôtre renvoie : %s\n", expected_result, result_ft);

    if (strcmp(result_ft, expected_result) == 0) {
        printf("Test réussi: Le résultat de ft_strjoin est correct.\n");
    } else {
        printf("Test échoué: Le résultat de ft_strjoin est incorrect.\n");
    }

    free(result_ft);
}
/*
int main() {
    // Test 1: Concaténation de deux chaînes non vides
    printf("Test 1: Concaténation de deux chaînes non vides\n");
    const char *s1 = "Hello, ";
    const char *s2 = "world!";
    const char *expected_result1 = "Hello, world!";
    test_strjoin(s1, s2, expected_result1);

    // Test 2: Concaténation de deux chaînes vides
    printf("\nTest 2: Concaténation de deux chaînes vides\n");
    const char *s3 = "";
    const char *s4 = "";
    const char *expected_result2 = "";
    test_strjoin(s3, s4, expected_result2);

    // Test 3: Concaténation d'une chaîne vide avec une chaîne non vide
    printf("\nTest 3: Concaténation d'une chaîne vide avec une chaîne non vide\n");
    const char *s5 = "";
    const char *s6 = "world!";
    const char *expected_result3 = "world!";
    test_strjoin(s5, s6, expected_result3);

    // Test 4: Concaténation d'une chaîne non vide avec une chaîne vide
    printf("\nTest 4: Concaténation d'une chaîne non vide avec une chaîne vide\n");
    const char *s7 = "Hello, ";
    const char *s8 = "";
    const char *expected_result4 = "Hello, ";
    test_strjoin(s7, s8, expected_result4);

    return 0;
}*/