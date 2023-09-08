void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int c;
    i = 0;
    j = 0;
    while (i < size)
    {
        while (j < size)
        {
            if (tab[i] > tab[j])
            {
                c = tab[i];
                tab[i] = tab[j];
                tab[j] = c;
            }
            j++;
        }
        i++;
        j = i;
    }
}

#include <stdio.h>

int main(void)
{
    int i;
    int tab[5] = {2, 1, 5, 4, 3};
    i = 0;
    ft_sort_int_tab(tab, 5);
    while (i < 5)
    {
        printf("%d", tab[i]);
        i++;
    }
    return (0);
}