#include <libft.h>

size_t ft_strlen(char const *str)
{
    size_t  i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
int main()
{
    char test[100] = "hard coding"

    printf("%d", ft_strlen(test));
    return(0);

}