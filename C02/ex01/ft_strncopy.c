#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;
    while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

    return dest;
}

int main(void)
{
    char dest[10];
    char *src = "Hello123";
    unsigned int n = 9;
    int i = 0;

    ft_strncpy(dest, src, n);
    while (dest[i])
    {
        write(1, &dest[i], 1);
        i++;
    }
}