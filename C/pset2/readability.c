// CAN IMPROVE(45)
// Readability test is the Coleman-Liau index
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(string a);
int count_words(string b);
int count_sent(string c);

int main(void)
{   float L, S;
    string text = get_string("Text: ");

    L = (float)count_letters(text) / count_words(text) * 100.0;

    S = (float)count_sent(text) / count_words(text) * 100.0;

    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if ( index < 1.0)
    printf("Before Grade 1 \n");
    else if ( index >= 16.0 )
    printf("Grade 16+ \n");
    else
    printf("Grade %i \n" , index);
}


int count_letters(string a)
{
    int lcount = 0;
    for(int i = 0; i<strlen(a); i++)
    {
        if (isalpha(a[i]))
        {
            lcount++;
        }
    }
    return lcount;
}



// here i have eliminated spaces in front and end and empty
// last thing is multiple spaces between words
int count_words(string b)
{
    int wcount = 1;
    int j = 0;
    while (! isalpha(b[j]))
    { j++; }

    int k=strlen(b);
    while (! isalpha(b[k]) && k>=0) // here it was an error since i didnt mention k>=0 of input "   " it became infinite since there was no alphabets
    { k--; }

    int length = k+1;
    for( j+=1 ; j<length; j++)
    {
        if (isblank(b[j]))
        {
            wcount++;
        }
    }
    return wcount;
}



int count_sent(string c)
{   int scount = 0;
    for( int k=0 ; k<strlen(c ); k++)
    {
        if( c[k]=='.' || c[k]=='?' || c[k]=='!')
        {
            scount++;
        }
    }
    return scount;
}