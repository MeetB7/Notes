// & - the Ampersand sign gives the address
// * - Dereference operater tells to go to a specific address
// Pointer is address of something
#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;  // * indicates that p is a pointer
    printf("%p\n", &n); // %p is placeholder for a pointer
    
    printf("%p\n", p); // this prints the address in p

    printf("%i\n", *p); // this goes to address in p and prints whats there. Here, an int 50.
    // dereferenced p.
}
// pointer takes up 8 bytes
// int takes up 4 bytes
