#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *str = "Mustafa";

	char *p;
	p = (char *)malloc(8 * sizeof(char));

	if(p == NULL)
	{
		return (1);
	}

	int i = 0;
	while (i < 8)
	{
		p[i] = str[i];
		i++;
	}

	printf("%s", p);
	free(p);
	return 0;
}