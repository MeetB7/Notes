#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int checkkey(int z, string key);

int main(int argc, string argv[])
{

    checkkey(argc,argv[1]);
    string plaintext = get_string("Plain text: ");
    printf("Cipher text: ");
    string k = argv[1];
    for(int x=0; x<strlen(plaintext);x++)
    {
        if(isupper(plaintext[x]))
        {
            printf("%c",toupper(k[plaintext[x]-65]));
        }
        else if(islower(plaintext[x]))
        {
            printf("%c",tolower(k[plaintext[x]-97]));
        }
        else printf("%c", plaintext[x]);
    }
    printf("\n");
    return 0;
}







int checkkey(int z, string key)
{
    if (z != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    if (strlen(key) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    for(int i=0; i<strlen(key);i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Key must only contain alphabets.\n");
            return 1;
        }
        for (int j=0; j<strlen(key); j++)
        {
            if (i!=j)
            {
                if(key[i] == key[j] || key[i]+32 == key[j] || key[i]-32 == key[j])
                {
                    printf("Key must not contain repeated characters.\n");
                    return 1;
                }
            }
        }
    }
    return 0;
}