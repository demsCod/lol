#include "libft.h"
#include <stdio.h>
#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
/*
// Fonction de test pour ft_putchar_fd
void test_putchar_fd(char c, int fd) {
    printf("Écriture du caractère '%c' sur le descripteur de fichier %d\n", c, fd);
    ft_putchar_fd(c, fd);
    ft_putchar_fd('\n', fd); // Ajout d'un retour à la ligne pour la lisibilité
}

int main() {
    // Test 1: Écriture d'un caractère sur la sortie standard (stdout)
    printf("Test 1: Écriture d'un caractère sur la sortie standard (stdout)\n");
    char c1 = 'A';
    test_putchar_fd(c1, 1);

    // Test 2: Écriture d'un caractère sur la sortie d'erreur standard (stderr)
    printf("\nTest 2: Écriture d'un caractère sur la sortie d'erreur standard (stderr)\n");
    char c2 = 'B';
    test_putchar_fd(c2, 0);

    // Test 3: Écriture d'un caractère sur un descripteur de fichier personnalisé
    printf("\nTest 3: Écriture d'un caractère sur un descripteur de fichier personnalisé\n");
    char c3 = 'C';
    test_putchar_fd(c3, 2);


    return 0;
}*/