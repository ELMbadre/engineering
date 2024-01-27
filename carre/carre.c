#include <stdio.h>

void carre(int nbr)
{
    int i;
    int j;
    
    i = 0;
    while (i < nbr)
    {
        j = 0;
        while (j < nbr) 
        {
            if (i == 0 || i == nbr - 1)
                printf("* ");
            else
            {
                if(j == 0 || j == nbr - 1)
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
    carre(10);
    return 0;
}
