#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%c\n" , *s); // *s is replacement for s[0]
    printf("%c\n" , *(s+1)); // since in memory they are back to back
    printf("%c\n" , *(s+2));

    printf("\n");

    printf("%s\n", s);
    printf("%s\n", s+1);
    printf("%s\n", s+2);

// if we use == to compare to strings instead of strcmp, it would compare memory of the 1st char of the both strings
// which obviously wouldn't be the equal.
}