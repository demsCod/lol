
#include <stddef.h>
#include "libft.h"
/*EXAMPLES
           int main(void) {
               char dest[20] = "Hello, ";
               const char *src = "world!";
               size_t result = strlcat(dest, src, sizeof(dest));

               printf("Result: %zu\n", result);
               printf("Concatenated string: %s\n", dest);
               return 0;
           }
     Output:
           Result: 13
           Concatenated string: Hello, world!
 */
size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	sizedest;
	size_t	sizesrc;
	int	i;
	int	j;

	sizedest = ft_strlen(dest);
	sizesrc = ft_strlen(src);

	if(size <= sizedest)
		return(size + sizesrc);
	i = 0;
	j = 0;
	while(dest[i])
	{
		i++;
	}
	while(i < (size - 1) && src [j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return(sizedest + sizesrc);
}
