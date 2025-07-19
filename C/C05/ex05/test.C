int    ft_sqrt(int nb)
{
	int    i;
	int	a;
    	i = 0;
	a = 0;
    	if (nb == 1)
       		return (1);
    	while (i < (nb / 2))
    	{
        	if ((a * a) == nb)
            	return (a);
        	i++;
		a++;
    	}
    	return (0);
}

#include <stdio.h>

int main()
{
   	 printf("%d", ft_sqrt(10));
}
