#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int lamasStart;
    int lamasEnd;
    int years = 0;
    
    do
    {
        lamasStart = get_int("Lamas: ");
        
    } while (lamasStart < 9);

    do
    {
        lamasEnd = get_int("Lamas End: ");
    } while (lamasEnd < lamasStart);
    
    // TODO: Calculate number of years until we reach threshold
    while (lamasStart < lamasEnd)
    {
        //enquanto lamasstat for menor que lamasend
        //calcula quantos lamas novos nasceram 
        lamasStart = lamasStart + (lamasStart / 3) - (lamasStart / 4);
        years++;
    }
    
    
    // TODO: Print number of years
    printf("Years: %i\n", years);
}
