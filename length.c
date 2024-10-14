#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("Name: ");

    int n = 0; //numero di caratteri; 0 = inizia a contare da 0
    while(name[n] != '\0') //while location character IS NOT EQUAL '\0' (nul character)
    {
        n++; //incrementa n
    }
    printf("%i\n", n);
}
