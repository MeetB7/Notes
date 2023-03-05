#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;


int main(void)
{
    person people[2];
    // people[0] this gives the first person
    people[0].name  = "Carter";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-949-468-2750";

    string s = get_string("Name: ");
    for (int i=0 ; i<2; i++)
    {
        if (strcmp(people[i].name, s) == 0)
        {
            printf("Found ");
            printf("%s\n",people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}

// strcmp is a fn which iterates through each char of the two strings and compares them.