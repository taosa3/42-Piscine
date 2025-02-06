#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i = 0;
    int j = 0;
    char temp;

    while(str[i])
        i++;
    i--;
    while(j < i)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        j++;
        i--;
    }
    return (str);
}

int main(int ac, char **av)
{
    printf("%s\n", av[1]);
    ft_strrev(av[1]);
    printf("%s\n", av[1]);
}