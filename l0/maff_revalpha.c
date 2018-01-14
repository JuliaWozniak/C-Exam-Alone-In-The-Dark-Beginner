#include <unistd.h>

int main(void)
{
	int i;
	int c;

	i = 26;
	c = 'z';

	while (i--)
	{
		if (i % 2 == 0)
			c = 'a' + i - ('a' - 'A');
		else
			c = 'a' + i;
		write(1, &c, 1);
	}
	write(1, "\n", 1);
	return (0);
}