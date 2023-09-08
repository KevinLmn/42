int ft_str_is_uppercase(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z' ))
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
    char *a = "";
    int i = ft_str_is_uppercase(a);
    char result = i + '0';
    write(1, &result, 1);
}