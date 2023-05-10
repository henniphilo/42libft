/* #include <stdio.h>
#include <stdlib.h>
#include <string.h> */

void	*ft_memmove (void *dst, const void *src, size_t size)
{
    char    *s;
    char    *d;
    size_t  i;

    s = (char *)src;
    d = (char *)dst;
    i = 0;
    if (d > s)
        while (size-- > 0)
            d[size] = s[size];
    else
        while (i < size)
        {
            d[i] = s[i];
            i++;
        }
    return (dst);
}

/* int main() 
{
    char src[] = "Hello, World!";
    char dst[20];
    size_t size = strlen(src) + 1; // Including the null terminator

    printf("Source string: %s\n", src);
    printf("Size of the string: %zu\n", size);

    ft_memmove(dst, src, size);

    printf("After ft_memmove, dest string: %s\n", dst);

    return 0;
} */