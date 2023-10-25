#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;

    // enquanto n for menor que 1, repete a pergunta
    do
    {
        n = get_int("Size: ");
    } while (n < 1);
    
    // enquanto i < n 
    for (int i = 0; i < n; i++)
    {
        // enquanto j for menor que n
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
