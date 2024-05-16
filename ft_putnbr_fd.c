#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "libft.h"
void    ft_putnbr_fd(int n, int fd)
{
    if(n < 0)
    {
        ft_putchar_fd('-', fd);
        ft_putnbr_fd(n * -1, fd);
    }
    if (n >= 0 && n <= 9)
        ft_putchar_fd(n + '0', fd);
    else
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
}

/*// Fonction de test pour ft_putnbr_fd
void test_putnbr_fd(int n, int fd) {
    printf("Écriture de l'entier %d sur le descripteur de fichier %d\n", n, fd);
    ft_putnbr_fd(n, fd);
    ft_putchar_fd('\n', fd); // Ajout d'un retour à la ligne pour la lisibilité
}

int main() {
    // Test 1: Écriture d'un entier sur la sortie standard (stdout)
    printf("Test 1: Écriture d'un entier sur la sortie standard (stdout)\n");
    int n1 = 12345;
    test_putnbr_fd(n1, STDOUT_FILENO);

    // Test 2: Écriture d'un entier sur la sortie d'erreur standard (stderr)
    printf("\nTest 2: Écriture d'un entier sur la sortie d'erreur standard (stderr)\n");
    int n2 = -54321;
    test_putnbr_fd(n2, STDERR_FILENO);

    // Test 3: Écriture d'un entier sur un descripteur de fichier personnalisé
    printf("\nTest 3: Écriture d'un entier sur un descripteur de fichier personnalisé\n");
    int n3 = 0;
    int custom_fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (custom_fd != -1) {
        test_putnbr_fd(n3, custom_fd);
        close(custom_fd);
    } else {
        printf("Erreur: Impossible d'ouvrir le fichier de sortie.\n");
    }

    return 0;
}*/
