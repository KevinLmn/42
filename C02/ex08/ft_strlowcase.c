char *ft_strlowcase(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z' )
        {
            str[i] += 32;
        }
        i++;
    }
    return str;
}

#include <unistd.h>
int main(void)
{
    int i = 0;

    char str[] = "e3eaHeelloee2";

    ft_strlowcase(str);

    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}