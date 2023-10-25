#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    } 
    while (min >= max);
    
    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{

    // se number for menor ou igual a 1, nao é primo
    if (number <= 1) {
        return false;
    }
    // se number for 2 ou 3 , é primo
    if (number == 2 || number == 3)
    {
        return true;
    }
    // verifica apartir de 2, o primeiro numero primo
    // e enqaunto i=2 for menor que number, incrementa um
    for (int i = 2; i < number; i++)
    {
        // verifica se o resto de divisao de number com i é 0
        // se for zero retorna falso
        if (number % i == 0)
        {
            return false;
        }
    }
    // return true para o numero primo
    return true;
    
    
    
}
