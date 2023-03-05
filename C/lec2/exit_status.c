#include <stdio.h>
#include <cs50.h>
// after executing the program do - echo $? in the terminal
int main(int argv, string argc[])
{
    if (argv != 2)
    {
        printf("Missing command-line argument!\n ");
        return 1; // for some reason 1123 shows up as 99 and 1132 shows 108 find out why?
     }
    else
    {
        printf("Hello, %s\n" , argc[1]);
        //return 0; //<-- this is automatic
    }
}