/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filename.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourname <yourname@student.42.fr>            +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: year/month/day hour:min:sec by yourname   #+#    #+#            */
/*   Updated: year/month/day hour:min:sec by yourname  ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned char	*valuex;
	size_t	i;

	i = 0;
	valuex = pointer;
	while (count > 0)
	{
		valuex[i] = value;
		i++;
        count --;
	}
    return(valuex);
}

/*void test_memset(void *ptr, int value, size_t num) {
    memset(ptr, value, num);
    ft_memset(ptr, value, num);

    // Comparaison des zones de mémoire modifiées
    if (memcmp(ptr, ptr + num, num) == 0) {
        printf("Test réussi: Les zones de mémoire ont été remplies avec la même valeur.\n");
    } else {
        printf("Test échoué: Les zones de mémoire remplies avec des valeurs différentes.\n");
    }
}

int main() {
    // Test 1: Remplissage d'une zone de mémoire avec une valeur spécifique
    printf("Test 1: Remplissage d'une zone de mémoire avec une valeur spécifique\n");
    char str1[20] = "Hello, world!";
    test_memset(str1, 'A', 10);
    printf("Résultat de memset: %s\n", str1);
    printf("Résultat de ft_memset: %s\n", str1);

    // Test 2: Remplissage d'une zone de mémoire avec la valeur 0
    printf("\nTest 2: Remplissage d'une zone de mémoire avec la valeur 0\n");
    int arr[5] = {1, 2, 3, 4, 5};
    test_memset(arr, 0, sizeof(arr));
    printf("Résultat de memset: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Résultat de ft_memset: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Test 3: Remplissage d'une zone de mémoire dans une structure
    printf("\nTest 3: Remplissage d'une zone de mémoire dans une structure\n");
    struct {
        int a;
        char b[10];
    } s;
    test_memset(&s, 'B', sizeof(s));
    printf("Résultat de memset: %d, %s\n", s.a, s.b);
    printf("Résultat de ft_memset: %d, %s\n", s.a, s.b);

    return 0;
}*/