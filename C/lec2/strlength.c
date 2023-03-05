#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = get_string("What's your name? ");
    int n = strlen(name);
    printf("%i \n", n);
}

// UNDER THE HOOD
// int n = 0
// while(name[n] != '\0')
// {
//  n++
// }