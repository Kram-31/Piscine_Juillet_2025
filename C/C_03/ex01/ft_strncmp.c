#include <unistd.h>

int ft_strcmp(char *str1, char *str2, unsigned int n)
{
  unsigned int i;
  i = 0;
while ((str1[i] != '\0' || str2[i] != '\0') && i < n)
	{
	if (str1[i] > str2[i])
		return (1);
	else if (str1[i] < str2[i])
		return (-1);
    	i++;
	}
return (0);
}

#include <stdio.h>

int main(void) {
  printf("%d", ft_strcmp("hello1", "hello2", 5));
  printf("\n%d", ft_strcmp("hel", "hello2", 5));
  printf("\n%d", ft_strcmp("hello1", "hel", 5));
}

