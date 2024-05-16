#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void ft_striteri(char *s, void (*fonction)(unsigned int,char*))
{
    unsigned int i;

    i = 0;
    while(s[i])
    {
        fonction(i , s + i);
        i++;
    }
}

/*void test_striteri(char *s, void (*f)(unsigned int, char *)) {
    printf("Chaîne avant ft_striteri : %s\n", s);
    ft_striteri(s, f);
    printf("Chaîne après ft_striteri : %s\n", s);
}

// Fonction de mapping pour test_striteri
void map_function(unsigned int i, char *c) {
    // Convertit chaque caractère en majuscule
    if (*c >= 'a' && *c <= 'z') {
        *c = *c - ('a' - 'A');
    }
}

int main() {
    // Test 1: Application de la fonction de mapping à une chaîne non vide
    printf("Test 1: Application de la fonction de mapping à une chaîne non vide\n");
    char s1[] = "Hello, world!";
    test_striteri(s1, &map_function);

    // Test 2: Application de la fonction de mapping à une chaîne vide
    printf("\nTest 2: Application de la fonction de mapping à une chaîne vide\n");
    char s2[] = "";
    test_striteri(s2, &map_function);

    return 0;
}*/