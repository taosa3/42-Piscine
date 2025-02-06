#include <unistd.h>

int	ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}


char *rev_print(char *str)
{
    int len;

    len = 0;
    len = ft_strlen(str);
    while(len >= 0)
    {
        write(1, &str[len], 1);
		len--;
    }
    return (str);
}

int main()
{
	char str[] = "gbrireugneb";
	rev_print(str);
}