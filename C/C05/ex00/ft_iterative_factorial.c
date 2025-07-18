int	ft_iterative_factorial(int nb)
{
	int	fac;

	fac = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		fac = fac * nb;
		nb--;
	}
	return (fac);
}

/*

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
}*/