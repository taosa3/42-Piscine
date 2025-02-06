#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int	i;
	int j;

	j = 0;
	i = 0;
    if (argc != 4)
    {
		write (1, "\n", 1);
		exit(EXIT_FAILURE);
    }
	char *str = argv[1];
	char to_replace = argv[2][0];
	char replace = argv[3][0];
	while (str[j])
		j++;

	while (str[i])
	{
		if (str[i] == to_replace)
			str[i] = replace;
		i++;
	}
	write (1, str, j);
	write (1, "\n", 1);
	exit(EXIT_SUCCESS);
}