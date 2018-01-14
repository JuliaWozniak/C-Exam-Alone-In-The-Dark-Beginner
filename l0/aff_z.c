#include <unistd.h>

int main (int argc, char **argv)
{
	if (argc == 1)
		write(1, "z\n", 2);
	else if (argv[0])
		write(1, "z\n", 2);
	return (0);
}