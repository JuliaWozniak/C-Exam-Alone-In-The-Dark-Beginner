#include <unistd.h>

#define SPACE(n) ((n == ' ') || (n == '\t'))

void ft_putchar(int c)
{
	write(1, &c, 1);
}

int main(int argc, char const *argv[])
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] && SPACE(argv[1][i]))
			i++;
		if (argv[1][i] != '\0')
			{
				while (argv[1][i] && !SPACE(argv[1][i]))
					ft_putchar(argv[1][i++]);
			}
		write(1, "\n", 1);
	}
	return 0;
}