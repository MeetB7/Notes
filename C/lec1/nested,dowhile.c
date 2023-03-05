#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // DO WHILE LOOP
    int n;
    do
    {
        n = get_int("Enter size: ");
    }
    while (n < 1);

    // NESTED LOOP
    for ( int i = 0; i<n; i++)
    {
        for ( int j = 0; j<n; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}