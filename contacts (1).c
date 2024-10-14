#include <cs50.h>
#include <stdio.h>

int main (void)
{
    string first_name = get_string("What is your first name? ");
    string last_name = get_string("What is your last name? ");
    int age = get_int("How old are you? ");
    string phone_number = get_string("What is your telephone number? ");

    printf("First name: %s\n", first_name);
    printf("Last name: %s\n", last_name);
    printf("Age: %i\n", age);
    printf("Phone number: %s\n", phone_number);

}

