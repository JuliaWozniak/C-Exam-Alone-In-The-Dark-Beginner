#include <unistd.h>

void repeat_letter(char c, int base)
{
	int i;

	i = 0;
	while (i++ <= (c - base))
		write(1, &c, 1);
}

void putstr(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			repeat_letter(*str, 'a');
		else if (*str >= 'A' && *str <= 'Z')
			repeat_letter(*str, 'A');
		else
			write(1, &(*str), 1);
		str++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		putstr(argv[1]);
	write(1, "\n", 1);
}