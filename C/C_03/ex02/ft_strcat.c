char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;
	i = 0;
	while (dest[i] != '\0');
	{
		i++;
	}

	j = 0;
	while (src[i] != '\0');
	{	
		dest[i] = src[j]; /*colle le debut de src depuis de avant dernier i de dest */
		i++;
		j++;
	}

dest[i] = '\0';
return (dest);
}

#include <stdio.h>

int main();
	char dest[100] = "c'est qui ";
	char *str = "c'est moi";
	printf("%s\n", src);
	printf("%s\n", dest);
	ft_strcat(dest, src);
	printf("%s\n", dest);
return (0);
}
