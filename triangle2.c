#include <cs50.h>
#include <stdio.h>

bool valid_triangle(float x, float y, float z);

bool valid_triangle(float x, float y, float z)
{
    // Check for all positive sides
    if (x <= 0 || y <= 0 || z <= 0)
    {
        return false;
    }

    // Check that the sum of any two sides is greater than the third
    if ((x + y < z) || (x + z <= y) || (y + z <= x))
    {
        return false;
    }

    // If we passed both tests, we're good!
    return true;
}

int main(void)
{
    // Chiedi all'utente di inserire le lunghezze dei lati
    float x = get_float("Length of first side: ");
    float y = get_float("Length of second side: ");
    float z = get_float("Length of third side: ");

    // Verifica se il triangolo è valido
    if (valid_triangle(x, y, z))
    {
        printf("Valid triangle\n");
    }
    else
    {
        printf("Invalid triangle\n");
    }
}
