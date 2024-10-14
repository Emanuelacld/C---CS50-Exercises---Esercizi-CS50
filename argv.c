//per stampare tutti gli argomenti presenti nel programma
#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[]) //argc: numero di argomenti compreso il nome del programma
{
    for (int i = 0; i < argc; i++)
    {
        printf("argv[%i] is %s\n", i, argv[i]);
    }
}
