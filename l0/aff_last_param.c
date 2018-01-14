#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	if (argc > 1)
		write(1, argv[argc - 1], (ft_strlen(argv[argc - 1])));
	write(1, "\n", 1);
}