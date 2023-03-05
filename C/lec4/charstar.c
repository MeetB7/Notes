//In a string "_" acts as a cue to put \0 i.e. null char at the end.
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = "HI!";
    /*
    s is a pointer of 1st char i.e. 'H' of the string.
    'String' only exits with the cs50 lib
    */
    char *a = "HI!";
    printf("%s\n", a);
    // printf %s doesnt need *a , it would consider it as a char then,
    // it only needs address of the 1st char of a string
    // it would look till it finds the null char i.e. \0

    printf("%p\n", a);     // a is the address of first char
    printf("%p\n", &a[0]); // a[0] is the first char of a

    // In an array, all characters are back to back stored in memory
    printf("%p\n", &a[1]);
    printf("%p\n", &a[2]);
    printf("%p\n", &a[3]);
    printf("%p\n", &a[4]);
}