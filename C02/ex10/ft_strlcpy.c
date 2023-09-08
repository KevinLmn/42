unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    long n = size;
    unsigned int i = 0;

    while(size > 1 && i <= n - 1)
    {
        dest[i]=src[i];
        i++;
    }
    if (i != 0)
    {
        dest[i] = '\0';
    }
    i = 0;
    while(src[i])
    {
        i++;
    }
    return i;
}

#include <stdio.h>
int main(void)
{
    char dest[10];
    char *src = "hello world";
    unsigned int size = 8;
    unsigned int result = ft_strlcpy(dest, src, size);
    printf("Result: %u\n", result);
}