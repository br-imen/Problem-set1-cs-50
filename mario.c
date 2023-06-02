#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //input//
    int n;
    do
    {
        n = get_int("Height:");
    }
    while (n <= 0 || n > 8);
//pyramid//
    int i ;
    int j ;
    int k ;
    for (i = 0; i < n ; i ++)
    {
        for (j = 1 ; j < n - i ; j ++)
        {
            printf(" ");
        }

        for (k = n + 1 ; k > j ; k --)
        {
            printf("#");
        }
        printf("\n");
    }
}

