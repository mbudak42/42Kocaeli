#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	while(*str != '\0')
	{
		char *s = str;
		char *f = to_find;
		while((*s != '\0') && (*f != '\0') && (*s == *f))
		{
			s++;
			f++;
		}
		if(*f == '\0')
		{
			return s;
		}
		str++;
	}
	return 0;
}

int main() {
	char *str = "Mustafanin amini dollim.";
	char *to_find = "Mustafa";

    char *sonuc = ft_strstr(str, to_find);

    if (sonuc != NULL) {
        printf("'%s' alt dizgesi '%s' ana dizgesinde bulundu.\n", to_find, str);
        printf("Bulundugu konum: %ld\n", sonuc - str);
    } else {
        printf("'%s' alt dizgesi '%s' ana dizgesinde bulunamadi.\n", to_find, str);
    }
    return 0;
}