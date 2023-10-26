#include <cs50.h>
#include <stdio.h>

int credit_digits(long credit_card);

int main(void) 
{
    long number = get_long("Number: ");
    
    int numb = credit_digits(number);
    printf("%i\n", numb);
    
}

int credit_digits(long credit_card)
{
    int sum = 0;
    int last_digit;
    while (credit_card > 0)
    {
        last_digit = credit_card % 10;
        credit_card = credit_card / 10;
    }
    return sum;
    
}
