#include <unistd.h>

char *ft_rev_print (char *str)
{
    int i = 0;
    while(str[i])
        i++;
    i--;
    while(i >= 0)
    {
        write(1, &str[i], 1);
        i--;
    }
       
}

int main(int ac, char **av)
{
    ft_rev_print(av[1]);
}