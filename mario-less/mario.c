#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    int blocks;

    do
    {
        blocks = get_int("Height: ");
    } while (blocks < 1 || blocks > 8 );
    
    for (int i = 0; i < blocks; i++)
    {  
        for (int j = 0; j < blocks; j++)
        {
            if (i+j < blocks - 1)
            {
                printf(" ");
            }
            else 
            {
                printf("#");
            }
        }
        printf("\n");
        
    }
}
