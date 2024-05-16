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
#include <string.h>
#include <stddef.h>
#include <stdio.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while(*s1 && i < n)
	{
		if(*(s1 + i) != *(s2 + i))
			return(*s1 - *s2);
		i++;
	}
	return(*s1 - *s2);
}

/*void test_strncmp(const char *s1, const char *s2, size_t n) {
    int result_libc = strncmp(s1, s2, n);
    int result_ft = ft_strncmp(s1, s2, n);

    printf("La vraie fonction renvoie : %d et la vôtre renvoie : %d\n", result_libc, result_ft);

    if (result_libc == result_ft) {
        printf("Test réussi: Les résultats des deux fonctions correspondent.\n");
    } else {
        printf("Test échoué: Les résultats des deux fonctions ne correspondent pas.\n");
    }
}

int main() {
    // Test 1: Comparaison de deux chaînes identiques
    printf("Test 1: Comparaison de deux chaînes identiques\n");
    const char *str1 = "Hello";
    const char *str2 = "Hello";
    test_strncmp(str1, str2, 5);

    // Test 2: Comparaison de deux chaînes différentes
    printf("\nTest 2: Comparaison de deux chaînes différentes\n");
    const char *str3 = "Hello";
    const char *str4 = "Hellp";
    test_strncmp(str3, str4, 5);

    // Test 3: Comparaison de deux chaînes avec n plus petit que leur longueur
    printf("\nTest 3: Comparaison de deux chaînes avec n plus petit que leur longueur\n");
    const char *str5 = "Hello";
    const char *str6 = "Hello, world!";
    test_strncmp(str5, str6, 5);

    // Test 4: Comparaison de deux chaînes avec n plus grand que leur longueur
    printf("\nTest 4: Comparaison de deux chaînes avec n plus grand que leur longueur\n");
    const char *str7 = "Hello";
    const char *str8 = "Hello";
    test_strncmp(str7, str8, 10);

    return 0;
}*/
