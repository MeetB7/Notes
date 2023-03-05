//--When a function calls itself, that function is set to be recursive.--
// compare with iteration.c

#include <stdio.h>
#include <cs50.h>

void draw(int n);
int main (void)
{
    int height = get_int("Enter height: ");
    draw(height);
}

void draw(int n)
{
    if (n <= 0)
    {
        return;
    }
    
    draw(n-1);

    for (int i =0; i<n; i++)
    {
        printf("#");
    }
    printf("\n");
}