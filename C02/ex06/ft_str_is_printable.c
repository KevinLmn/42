int ft_str_is_printable(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (!(str[i] >= 32 && str[i] <= 126 ))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

#include <unistd.h>
int main(void)
{
    char *a = "ezae9_e'e";
    int i = ft_str_is_printable(a);
    char result = i + '0';
    write(1, &result, 1);
}