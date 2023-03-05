#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
// BEST IS AT LAST
int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for ( int i =0 ; i < strlen(s) ; i++)
    {
        if ( s[i] >= 'a' && s[i] <= 'z' )
        {
            printf( "%c" , s[i] - 32 );
        }
        else printf( "%c", s[i] );
    }
    printf( "\n");

}

//    for ( int i =0 ; i < strlen(s) ; i++)
//    {
//        if (islower(s[i]) )
//        {
//            printf( "%c" , toupper(s[i]) );
//        }
//        else printf( "%c", s[i] );
//    }
//    printf( "\n");


// BEST
//  for ( int i =0 ; i < strlen(s) ; i++
//  {
//      printf("%c" , toupper(s[i]) );   THIS WILL NOT TURN UPPERCASE TO LOWER
//  }