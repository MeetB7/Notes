// TODO was the fn vote(name) and print_winner
#include <stdio.h>
#include <cs50.h>
#include <string.h>

#define Max 9

typedef struct
{
    string name;
    int votes;
}
candidate;

candidate candidates[Max];
int candidate_count;

bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    if(argc <2)
    {
        printf("Usage: ./plurality [candidate ...]\n");
        return 1;
    }
    candidate_count = argc - 1;
    if (candidate_count > Max)
    {
        printf("Maximum number of candidates is %i.\n", Max);
        return 2;
    }

    for (int i =0 ; i < candidate_count; i++)
    {
        candidates[i].name = argv[i+1];
        candidates[i].votes = 0;
    }
    int voters_count = get_int("Number of voters: ");
    for (int i=0; i < voters_count; i++ )
    {
        string name_c = get_string("Vote: ");

        if(!vote(name_c))
        {
            printf("Invalid Vote.\n");
        }
    }
    print_winner();
}

bool vote(string name)
{
    for(int i=0; i<candidate_count; i++)
    {
        if(strcmp(name, candidates[i].name) == 0)
        {
            candidates[i].votes++;
            return true;
        }
    }
    return false;
}

void print_winner(void)
{
    int maxvotes =0;
    for( int i =0; i<candidate_count; i++)
    {
        if (maxvotes < candidates[i].votes)
        {
            maxvotes = candidates[i].votes;
        }
    }

    for(int i=0; i<candidate_count; i++)
    {
        if (maxvotes == candidates[i].votes)
        {
            printf("%s\n",candidates[i].name);
        }
    }
}