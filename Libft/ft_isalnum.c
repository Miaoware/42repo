#include <stdio.h>

int ft_isalnum(int n)
{
    if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z') || (n >= '0' && n <= '9'))
    {
        return (1);
    }
    return (0);
}

int main()
{
    char test = 'a';
    printf ("%d", ft_isalnum(test));

    return(0);
}