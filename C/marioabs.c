#include <stdio.h>
#include <cs50.h>

int get_size(void);
void print_grid(int size);

int main(void)
{
    int n = get_size();

    print_grid(n);
}



// esta funçao retorna um valor inteiro.
int get_size(void) 
{
    int n;

    do
    {
        n = get_int("Size: ");
    } while (n < 1);
    
    return n; // return value of n input
}

// esta funçao nao retorna nenhum valor
void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");  
    }
    
}
