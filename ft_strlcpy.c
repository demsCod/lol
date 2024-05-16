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

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;

	i = 0;
	if(destsize == 0)//si la taille de dest est a zero on retourne la taille de la tentavtive
	{
		while(src[i])
			i++;
		return(i);
	}
	while(src[i] && i < destsize - 1)//bcl tant que on a pas finish src ET pas atteint la taille de DEST - 1 (pour le char NULL)
	{
		dest[i] = src[i];
		i++;
	}
	if(i < destsize)//Si il reste de la place on met le chaR NULL
		dest[i] = '\0';
	while(src[i])//on s'assure que i fasse la taille TOTALE de src
		i++;
	return(i);
}

/*void test_strlcpy(char *dst, const char *src, size_t size, size_t expected_return) {
    size_t result_ft = ft_strlcpy(dst, src, size);

    if (result_ft == expected_return && strcmp(dst, src) == 0) {
        printf("Test réussi: Le résultat de ft_strlcpy est correct.\n");
    } else {
        printf("Test échoué: Le résultat de ft_strlcpy est incorrect.\n");
    }
    printf("Résultat de ft_strlcpy: %zu\n", result_ft);
    printf("Contenu de la destination après ft_strlcpy: %s\n", dst);
}

int main() {
    // Test 1: Copie d'une chaîne entière dans un tampon suffisamment grand
    printf("Test 1: Copie d'une chaîne entière dans un tampon suffisamment grand\n");
    char dst1[20] = "";
    const char *src1 = "Hello, world!";
    size_t expected_return1 = strlen(src1);
    test_strlcpy(dst1, src1, sizeof(dst1), expected_return1);

    // Test 2: Copie d'une partie d'une chaîne dans un tampon de taille fixe
    printf("\nTest 2: Copie d'une partie d'une chaîne dans un tampon de taille fixe\n");
    char dst2[10] = "";
    const char *src2 = "Hello, world!";
    size_t expected_return2 = strlen(src2);
    test_strlcpy(dst2, src2, sizeof(dst2), expected_return2);

    // Test 3: Copie d'une chaîne entière dans un tampon de taille fixe
    printf("\nTest 3: Copie d'une chaîne entière dans un tampon de taille fixe\n");
    char dst3[5] = "";
    const char *src3 = "Hello, world!";
    size_t expected_return3 = strlen(src3);
    test_strlcpy(dst3, src3, sizeof(dst3), expected_return3);

    return 0;
}*/