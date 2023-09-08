char *ft_strcapitalize(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z' )
        {
            if(!((str[i-1] >= 'a' && str[i-1] <= 'z') || (str[i-1] >= 'A' && str[i-1] <= 'Z')))
            {
                str[i] -= 32;
            }
            
        }
        // else
        //     {
        //         if((str[i] >= 'A' && str[i] <= 'Z') || !((str[i-1] >= 'a' && str[i-1] <= 'z') || (str[i-1] >= 'A' && str[i-1] <= 'Z')))
        //         {
        //             str[i] += 32;
        //         }
        //     }
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            if((str[i-1] >= 'a' && str[i-1] <= 'z') || (str[i-1] >= 'A' && str[i-1] <= 'Z'))
            {
                str[i] += 32;
            }
        }
        i++;
    }
    return str;
}

#include <unistd.h>
int main(void)
{
    int i = 0;

    char str[] = "heLLo THIS 44hEy 34 is-awesOme";

    ft_strcapitalize(str);

    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}