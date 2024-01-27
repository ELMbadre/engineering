#include <stdio.h>

void triangle(int l, int c)
{
    int i;
    int j;

    i = 0;
    while (i < l)
    {
        j = 0;
        while (j < c) 
        {
            if(i == l - 1 || i == 0)
                printf("* ");
            else
            {
                if (j == 0 || j == c -1)
                    printf("* ");
                else
                    printf("  ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
}

int main()
{
    triangle(6, 12);
    return 0;
}