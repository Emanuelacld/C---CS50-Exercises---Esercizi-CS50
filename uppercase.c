#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        //if lowercase
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32); // 32 = differenza in ASCII, es. 65 A - 97 a, MEGLIO: ("%c", s[1] - ('a' - 'A')); oppure ancora usare la funzione toupper in #<cytpe.h>
        }
        else
        {
            printf("%c", s[i]); // se è già uppercase ad esempio
        }
    }
    printf("\n");
}
