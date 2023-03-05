#include <stdio.h>
#include <cs50.h>

const int N = 3;

float average(int length , int array[]);
int main(void)
{
    int scores[N];
    for(int i = 0; i < N; i++)
    {
        scores[i] = get_int("Enter Score ");
    }

    printf("Average: %f \n" , average( N, scores));

}



float average(int length , int array[])
{
    float sum = 0;
    for(int j = 0; j < length ; j++)
    {
        sum += array[j];
    }
    return  sum / (float) length ;
}