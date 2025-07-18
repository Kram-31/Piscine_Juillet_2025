int	ft_recursive_factorial(int nb)
{
	int	fac;

	fac = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		fac *= nb * ft_recursive_factorial(nb - 1);
		nb --;
	}
	return (fac);
}

/*

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_factorial(5));
}*/