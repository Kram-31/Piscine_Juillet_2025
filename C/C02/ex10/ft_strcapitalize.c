#include <unistd.h>

void *ft_strcapitalize(char *str)
 {
	int i;
	i = 0;
  while (str[i] != '\0')
  {
	 if (str[i] <= 'a' && >= 'z')
    	  str[i] = str[i] - 32;
  
  }
}
