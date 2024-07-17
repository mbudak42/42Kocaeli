#include <stdio.h>

void ft_rev_int_tab(int *array, int size) 
{
    int i = 0;
    int temp;
    while (i<size-1) 
	{
		if(array[i] <= array[i+1])
		{
			i++;
		}
		else
		{
			temp = array[i];
        	array[i] = array[i+1];
        	array[i+1] = temp;
        	ft_rev_int_tab(array,size);
		}
        
    }
}

int main()
{
	int array[] = {1,6,4,7,3,9,8,2,5,10};
	int size = 0;
	while(array[size]!='\0')
	{
		size++;
	}

	ft_rev_int_tab(array,size);

	for (int i = 0; i < size; i++)
	{
        printf("%d ", array[i]);
    }
    printf("\n");
}