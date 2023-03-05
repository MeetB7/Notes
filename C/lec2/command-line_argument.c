#include <stdio.h>
#include <cs50.h>

// ./command-line_argument "INPUT"
int main(int argc, string argv[] )
{
    if( argc == 2 )
    {
        printf("Hello, %s\n", argv[1]); // argc[0] will be ./command-line_argument
    }
    else printf("Hello! \n");
}