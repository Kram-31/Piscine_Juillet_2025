#include <unistd.h>

int ft_strcmp(char *str1, char *str2) {
  int i;
  i = 0;

  while (str1[i] == str2[i] && str1[i] != '0' && str2[i] != '0') {
    i++;
  }
  return ((str1[i] - str2[i]));
}
#include <stdio.h>

int main(void) {
  printf("%d", ft_strcmp("hello1", "hello2"));
  printf("\n%d", ft_strcmp("hel", "hello2"));
  printf("\n%d", ft_strcmp("hello1", "hel"));
}
