#include <stdio.h>
 
int ft_isprint(int p)
{
    if (p >= ' ' && p <= '~')
    {
        return (1);
    }
    return (0);
}

int main()
{
    char test = 'a';
    printf("%d", ft_isprint(test));

    return (0);
}
