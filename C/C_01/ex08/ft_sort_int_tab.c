#include <unistd.h>

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>

int main(void)
{
	int arr[] = {5, 2, 8, 1, 9};
	int size = 5;
	int k;

	printf("Tableau original : ");
	k = 0;
	while(k < size)
	{
		printf("%d ", arr[k]);
		k++;
	}
	printf("\n");

	ft_sort_int_tab(arr, size);

	printf("Tableau trié :     ");
	k = 0;
	while(k < size)
	{
		printf("%d ", arr[k]);
		k++;
	}
	printf("\n");

	int arr2[] = {3, 1, 4, 1, 5, 9, 2, 6};
	int size2 = 8;

	printf("Tableau original 2 : ");
	k = 0;
	while(k < size2)
	{
		printf("%d ", arr2[k]);
		k++;
	}
	printf("\n");

	ft_sort_int_tab(arr2, size2);

	printf("Tableau trié 2 :     ");
	k = 0;
	while(k < size2)
	{
		printf("%d ", arr2[k]);
		k++;
	}
	printf("\n");

	return (0);
}
