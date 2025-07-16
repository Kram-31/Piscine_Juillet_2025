#include <unistd.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return dest;

}
/*
#include <stdio.h>

int main(void)
{
    char dest1[20]; // Destination 
    char src1[] = "kamal"; // le mot dans le tableau src
    unsigned int n1 = 5; // taille

    printf("Le contenu du *src à été copié dans *dest: \n");
    printf("src: \"%s\", la nombre de char copié est: %u\n", src1, n1);
    ft_strncpy(dest1, src1, n1);
    printf("dest: \"%s\"\n", dest1);
}
*/
