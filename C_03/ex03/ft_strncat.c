#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *dest_ptr = dest;

	while(*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	while ((*src != '\0') && nb>0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		nb--;
	}

	*dest_ptr = '\0';
	return dest;	
}

int main() 
{
    char dest[50] = "Hello, ";
    char src[] = "world!";
	int nb = 3;
    ft_strncat(dest, src, nb);

    printf("%s", dest);

    return 0;
}