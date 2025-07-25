#include <unistd.h> 

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *str1, char *str2)
{
	unsigned int	i;
	
	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	
	return (str1[i] - str2[i]);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	int i;
	int j;
	
	i = 1;
	while (i < ac - 1)
	{
		j = 1;
		while (j < ac - 1)
		{ // compare j avec j + 1 en asci donc > 0 
			if (ft_strcmp(av[j], av [j + 1]) > 0)
				ft_swap(&av[j], &av[j + 1]);
			j++;
		}
		i++;
	}

	i = 1;
	while(i < ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
	i++;
	}
return (0);
}
