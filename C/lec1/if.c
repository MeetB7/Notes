#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char c = get_char ("Enter y or n ");
    if ('y' == c || 'Y' == c )
    {
        printf("Agreed\n");

    }
    else if ('n'== c || 'N' == c )
    {
        printf("Disagreed\n");
    }
}