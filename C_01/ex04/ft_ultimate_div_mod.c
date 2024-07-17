#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int swap_div;
	int swap_mod;
	swap_div = (*a / *b);
	swap_mod = (*a % *b);
	*a = swap_div;
	*b = swap_mod;
}
