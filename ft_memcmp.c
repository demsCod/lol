#include <stddef.h>
#include "libft.h"
#include <stdio.h>
#include <string.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *ss1;
    unsigned char   *ss2;

    ss1 = (void *)s1;
    ss2 = (void *)s2;
    while(n > 0 && *ss1 == *ss2)
    {
        if(*ss1 != *ss2)
            return(*ss1 - *ss2);
        ss1++;
        ss2++;
        n--;
    }
    return(*ss1 - *ss2);
}
/*
void test_memcmp(const void *s1, const void *s2, size_t n) {
    int result_libc = memcmp(s1, s2, n);
    int result_ft = ft_memcmp(s1, s2, n);

    printf("La vraie fonction renvoie : %d et la vôtre renvoie : %d\n", result_libc, result_ft);

    if (result_libc == result_ft) {
        printf("Test réussi: Les résultats des deux fonctions correspondent.\n");
    } else {
        printf("Test échoué: Les résultats des deux fonctions ne correspondent pas.\n");
    }
}

int main() {
    // Test 1: Comparaison de deux zones de mémoire identiques
    printf("Test 1: Comparaison de deux zones de mémoire identiques\n");
    char str1[] = "Hello";
    char str2[] = "Hello";
    test_memcmp(str1, str2, 5);

    // Test 2: Comparaison de deux zones de mémoire différentes
    printf("\nTest 2: Comparaison de deux zones de mémoire différentes\n");
    char str3[] = "Hello";
    char str4[] = "Hellp";
    test_memcmp(str3, str4, 5);

    // Test 3: Comparaison de deux zones de mémoire avec n plus petit que leur longueur
    printf("\nTest 3: Comparaison de deux zones de mémoire avec n plus petit que leur longueur\n");
    char str5[] = "Hello";
    char str6[] = "Hello, world!";
    test_memcmp(str5, str6, 5);

    // Test 4: Comparaison de deux zones de mémoire avec n plus grand que leur longueur
    printf("\nTest 4: Comparaison de deux zones de mémoire avec n plus grand que leur longueur\n");
    char str7[] = "Hello";
    char str8[] = "Hello";
    test_memcmp(str7, str8, 10);

    return 0;
}*/