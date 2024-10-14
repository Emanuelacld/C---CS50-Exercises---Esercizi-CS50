#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"}; //non c'è bisogno di scrivere 6 tra []

    string s = get_string("String: ");

    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == 0) //compare, se return 0 significa che le string sono le stesse; non funziona così if (strings[i] == s)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 0;
}
