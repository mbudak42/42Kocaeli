#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while((*s1 != '\0') && (*s1 == *s2) && (n>1))
	{
		s1++;
		s2++;
		n--;
	}
	return *s1 - *s2;
}

int main(void)
{
	char s1[] = "hello";
	char s2[] = "helloword";
	int n = 5;
	printf("%d", ft_strncmp(s1,s2,n));
}