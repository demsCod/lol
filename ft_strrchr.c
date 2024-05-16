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
#include <stdio.h>
#include <string.h>
#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);

	if(!(*s))
		return (NULL);
	while (i != 0)
	{
		if(s[i] == (char)c)
			return((char *)s + i);
		i--;
	}
	return (NULL);
}
/*
void test_strrchr(const char *str, int c) {
    char *result_libc = strrchr(str, c);
    char *result_ft = ft_strrchr(str, c);

    printf("La vrai fonction renvoie : %s et la votre renvoie : %s\n" , result_libc , result_ft);

    if (result_libc == NULL && result_ft == NULL) {
        printf("Test réussi: Aucune occurrence du caractère recherché n'a été trouvée.\n");
    } else if (result_libc != NULL && result_ft != NULL && result_libc == result_ft) {
        printf("Test réussi: Les adresses de retour sont les mêmes.\n");
    } else {
        printf("Test échoué: Les adresses de retour ne correspondent pas.\n");
    }
}

int main() {
    // Test 1: Caractère présent
    printf("Test 1: Caractère présent\n");
    char str1[] = "exemple de texte pour le test";
    int c1 = 't';
    test_strrchr(str1, c1);

    // Test 2: Caractère absent
    printf("\nTest 2: Caractère absent\n");
    char str2[] = "exemple de texte pour le test";
    int c2 = 'z';
    test_strrchr(str2, c2);

    // Test 3: Chaîne vide
    printf("\nTest 3: Chaîne vide\n");
    char str3[] = "";
    int c3 = 'a';
    test_strrchr(str3, c3);

    // Test 4: Caractère NULL
    printf("\nTest 4: Caractère NULL\n");
    char str4[] = "Bonjour\0monde";
    int c4 = '\0';
    test_strrchr(str4, c4);

    return 0;
}*/