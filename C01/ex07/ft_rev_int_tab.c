#include <unistd.h>
#include <stdio.h>

void ft_print_alphabet(void)
{
    write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}


void ft_swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int j;
    int c;
    i = 0;
    j = size - 1;
    while (i < j)
    {
        c = tab[i];
        tab[i] = tab[j];
        tab[j] = c;
        i++;
        j--;
    }
}

int main(void)
{
    int i;
    int tab[5] = {1, 2, 3, 4, 5};
    i = 0;
    ft_rev_int_tab(tab, 5);
    while (i < 5)
    {
        printf("%d", tab[i]);
        i++;
    }
    return (0);
}