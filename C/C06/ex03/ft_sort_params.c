#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int		i;
	char	n;
	char	*tmp;

	i = 1;
	n = '\n';
	while (i < argc)
	{
		if (argv[i + 1] > argv[i])
		{
			tmp = argv[i + 1];
			argv[i] = argv[i + 1];
			argv[i + 1] = tmp;
		}
		write (1, argv[i], ft_strlen(argv[i]));
		write (1, &n, 1);
		i++;
	}
	return (0);
}
