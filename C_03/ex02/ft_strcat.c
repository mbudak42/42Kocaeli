#include <stdio.h>
char	*ft_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	while(*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	while(*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}

	*dest_ptr = '\0';
	return dest;
}

int main() 
{
    char dest[50] = "Hello, ";
    char src[] = "world!";

    ft_strcat(dest, src);

    printf("%s", dest);

    return 0;
}