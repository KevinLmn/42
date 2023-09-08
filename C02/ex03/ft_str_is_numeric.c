int ft_str_is_numeric(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (!(str[i] >= '0' && str[i] <= '9' ))
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
    char *a = "333e";
    int i = ft_str_is_numeric(a);
    char result = i + '0';
    write(1, &result, 1);
}