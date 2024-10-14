#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[]) //argument count of the integers + array of strings
{
    if (argc == 2) // ERROR CHECKING: solo se ci sono due parole nel nostro argv
    {
        printf("hello, %s\n", argv[1]); // argv 0 è il nome del programma stesso, quindi 1 è l'argomento fornito dall'utente
    }
    else
    {
        printf("hello, world\n");
    }
}
