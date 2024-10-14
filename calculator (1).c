#include <stdio.h>
#include <cs50.h>

int add(int a, int b);

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

int z = add(x, y); // è veramente utile la variabile z?
    printf("%i\n", z); // "x+y" ci dà la stringa di testo
}

int add(int a, int b) //int invece di void significa che il valore di ritorno è un intero
{
    return a + b; //qui non possiamo usare x e y perché sono fuori dallo scope
}
