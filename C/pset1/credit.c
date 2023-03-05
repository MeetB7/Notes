#include <stdio.h>
#include <cs50.h>

int count;
bool check_validity(long long n);
void print_brand(long long c);
int main(void)
{   count = 0;
    long credit = get_long("ENTER CARD NUMBER: ");
    long credit_number = credit;

    while(credit != 0)
    {
        credit = credit/10;
        count++;
    }

    if ( count == 13 || count == 15 || count == 16)
    {
        if( check_validity(credit_number) == true)
        {
            print_brand( credit_number );
        }
        else printf("INVALID\n");
    }
    else printf("INVALID\n");
}

bool check_validity(long long n)
{  int sum = 0;
    for(int i=0; n != 0; i++)
    {
        if (i%2 == 0)
        {
            sum += n%10;
        }
        else
        {
            sum += (2 * (n%10))%10 + (2 * (n%10))/10;
        }
        n /= 10;
    }
    return (sum%10) == 0;
}

void print_brand( long long cnn)
 {
    if ((cnn >= 34e13 && cnn < 35e13) || (cnn >= 37e13 && cnn < 38e13))
    printf("AMEX\n");
    else if (cnn >= 51e14 && cnn < 56e14)
    printf("MASTERCARD\n");
    else if ((cnn >= 4e12 && cnn < 5e12) || (cnn >= 4e15 && cnn < 5e15))
    printf("VISA\n");
    else printf("INVALID\n");

}

//  THIS IS MY CODE.. I SCRAPPED IT BECAUSE OF SOME DUMB ERROR I DID AT THE START


//void print_brand( long long cnn)
//{
//    int start = cnn/100000000000000;
   // if ( count == 13 && cnn/1000000000000 == 4)
 //   {
 //       printf("VISA\n");
 //   }
 //   else if ( count == 15 && (cnn/10000000000000 == 34 || cnn/10000000000000 == 37 ))
  //  {
      //  printf("AMEX\n");
    //}
  //  else if ( count == 16 && cnn/1000000000000000 == 4)
//    {
  //      printf("VISA\n");
//    }
 //   else if ( count == 16 && (start >= 51 && start <= 55 ))
//    {
//        printf("%i", start);
//        printf("MASTERCARD\n");
//    }
//}

