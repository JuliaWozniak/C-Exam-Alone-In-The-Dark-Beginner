#include <unistd.h>

int main(void)
{
	int i;
	int c;

	i = -1;
	while (++i < 26)
	{
		if (i % 2 == 1)
			c = 'a' + i + 'A' - 'a';
		else
			c = 'a' + i;
		write(1, &c, 1);
	}
	write(1, "\n", 1);
	return (0);
}