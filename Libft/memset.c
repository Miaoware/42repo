#include <libft.h>

void *ft_memset(void *str, int c, size_t n)
{
    void *mem_start;

    mem_start = str;
    while (n--)
    {
        *(unsigned char *)str++ = (unsigned char)c;
    }
    return (mem_start);
}

int main()
{

}