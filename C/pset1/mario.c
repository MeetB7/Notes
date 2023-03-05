#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Enter height: ");
    }
    while (1>n || n>8);

    int m = n -1 ;
    int l = n - m;
    for (int a = 0; a<n ; a++)
    {
        for (int i = 0; i<m ; i++)
            {
                printf ( " " );
            }
            for (int j = 0; j<l ; j++)
            {
                printf ("#");
            }
            printf("  ");
            for (int b = 0; b<l; b++)
            {
                printf("#");
            }

            printf ("\n");
            m--;
            l++;

     }


}