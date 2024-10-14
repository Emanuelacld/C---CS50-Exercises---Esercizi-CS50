#include <stdio.h>
#include <cs50.h>

//costante
const int N = 3;

//prototipo
float average(int length, int array[]);

int main(void)
{
    //calcola la media
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }
    //stampa la media
    printf("Average: %f\n", average(N, scores));
}

// Definizione della funzione average
float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return (float) sum / length;
}
