#include <stdio.h>
int	ft_strcmp(char *s1,char *s2)
{
	while((*s1 != '\0') && (*s1==*s2))
	{
		s1++;
		s2++;
	}
	return *s1 - *s2;
}
int main(void)
{
	char s1[] = "hello";
	char s2[] = "helloword";
	printf("%d", ft_strcmp(s1,s2));
}