#include <stdlib.h>

int *ft_range(int min, int max)
{
    int range;
    int array;
    
    range = 0;
    if (min >= max)
        return (NULL);
    if (max <= 0 && min >= 0)
        range = min - max;
    else
        range = max - min;
    array = (int *)malloc(range * sizeof(int));
    if (array == NULL)
        return (NULL);
}