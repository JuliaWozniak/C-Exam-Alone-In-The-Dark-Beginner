#include <unistd.h>

int main(void)
{
	int i;
	int c;

	i = 26;
	while (--i >= 0)
	{
		if (i % 2 == 0)
			c = 'a' + i + 'A' - 'a';
		else
			c = 'a' + i;
		write(1, &c, 1);
	}
	write(1, "\n", 1);
	return (0);
}