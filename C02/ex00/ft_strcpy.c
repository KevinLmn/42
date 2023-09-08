#include <unistd.h>
char *ft_strcpy(char *dest, char *src)
{
    int i;
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main(void)
{
    char hello[20];
    char *src = "Salut123";
    ft_strcpy(hello, src);
    int i = 0;
    while (hello[i])
    {
        write(1, &hello[i], 1);
        i++;
    }
}