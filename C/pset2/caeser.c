#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

bool is_number(string k);
char rotate(int n , char c);

int main(int argc, string argv[])
{
    if (argc != 2 || !is_number(argv[1]))
    {
        printf ("Usage: ./caeser key\n");
        return 1;
    }
    int key = atoi(argv[1]);
    if (key < 1)
    { printf ("Usage: ./caeser key\n"); return 1;}
    printf("%i\n", key);

    string plaintext = get_string("Plain text: ");
    printf("Cipher text: ");
    for (int j=0; j<strlen(plaintext);j++)
    {
        printf("%c",rotate(key, plaintext[j]));
    }
    printf("\n");
}



bool is_number(string k)
{
    for (int i = 0; i<strlen(k); i++)
    {
          if( !isdigit(k[i]))
          {return false;}
    }
    return true;
}

char rotate(int n , char c)
{
    if (isupper(c))
    {
        return (c-65 +n)%26 +65;
    }
    else if (islower(c))
    {
        return (c-97 +n)%26 +97;
    }
    else return c;
}