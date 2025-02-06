#include <unistd.h>
#include <stdio.h>

char    *ft_strrev(char *str)
{
    int len = 0;
    int i = 0;
    char temp;
    while(str[len])
        len++;
    len--;
    while(len >= i)
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        i++;
        len--;
    }
    return str;
}

int main()
{
    char a[] = "o gajo tem a musica bue alta";
    printf("%s", ft_strrev(a));
}