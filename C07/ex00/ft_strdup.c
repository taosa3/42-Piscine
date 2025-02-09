#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strcpy(char *dest, char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
       dest[i] = str[i];
       i++;
    }
    dest[i] = '\0';
    return (dest);
}

char *ft_strdup(char *src)
{
    int len;
    char *dest;

    len = ft_strlen(src);
    dest = (char *)malloc((len + 1) * sizeof(char));
    if (dest == NULL)
        return (NULL);
    ft_strcpy(dest, src);
    return (dest);
}

int main()
{
    char a[] = "Quem mais da o cu e gay";
    printf("%s\n", ft_strdup(a));
}