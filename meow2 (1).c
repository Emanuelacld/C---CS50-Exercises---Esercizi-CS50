#include <stdio.h>

int main(int n)
{
    for (int i = 0; i < n; i++)
    {
        meow(3000);
    }
}

void meow(int n)
{
    for (int i = 0; i < n ; i++)
    {
        printf("meow\n");
    }
}
