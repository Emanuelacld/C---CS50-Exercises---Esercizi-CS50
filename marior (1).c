#include <cs50.h>
#include <stdio.h>

void print_row(int length); // mettere sempre il function prototype qua sopra

int main(void)
{
    int height = get_int("Height: ");

    for (int i = 0; i < height; i++)
    {
        print_row(i + 1);
    }

}

void print_row(int length) // altra funzione che non ritorna niente in particolare
{
    for (int i = 0; i < length; i++)
    {
        printf("#");
    }
    printf("\n");
}
