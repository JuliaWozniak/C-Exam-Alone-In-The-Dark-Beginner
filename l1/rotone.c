#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

char *change_letters(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (str[i] - 'a' + 1) % 26 + 'a'; 
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = (str[i] - 'A' + 1) % 26 + 'A';
		i++;
	}
	return (str);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putstr(change_letters(argv[1]));
	}
	write(1, "\n", 1);
}