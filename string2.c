#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");
    //for (int i = 0; i < strlen(s); i++) //sbagliato strlen nel loop
    for (int i = 0; n = strlen(s); i < n; i++) //meglio perché strlen è nella parte dell'inizializzazione del loop e non parte dell'espressione boolean, alias così strlen viene chiamato solo una volta nel ciclo e il risultato viene utilizzato, e non viene chiamato ogni volta nel ciclo
    {
        printf("%c", s[i]);
    }
    printf("\n");
}
