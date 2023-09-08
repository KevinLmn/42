int ft_str_is_lowercase(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (!(str[i] >= 'a' && str[i] <= 'z' ))
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
    char *a = "ezez";
    int i = ft_str_is_lowercase(a);
    char result = i + '0';
    write(1, &result, 1);
}