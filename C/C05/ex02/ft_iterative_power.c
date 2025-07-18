int	ft_iterative_power(int nb, int power)
{
	int num;
	num  = 1;
if 	(power < 0)
	return (0);
if (power == 0)
	return (1);
while ( power > 0)
{
	num = num * nb;
	power--;
}
return (num);
}
/*
#include <stdio.h>

int     main(void)
{
	printf("%d", ft_iterative_power(5, 1));
}
*/



