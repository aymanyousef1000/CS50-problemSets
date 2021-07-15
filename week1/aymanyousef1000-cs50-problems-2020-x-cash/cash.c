#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars ;
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0);

    //cash in cents
    int cents = round(dollars * 100);
    //testing number of cents
    //printf("%i\n", cents);
    int quart = 0, p = 0, c = 0, k = 0, total = 0;

    for (int i = 0 ; i < cents ; i++)
    {
        //calculating number of quarters
        if (cents >= 25)
        {
            quart = cents / 25 ;
            cents = cents - (quart * 25);
            
        }
        //calculating number of dimes
        if (cents >= 10 && cents < 25)
        {
            p = cents / 10;
            cents = cents - (p * 10);
        }
        //calculating number of nickels
        if (cents >= 5 && cents < 10)
        {
            c = cents / 5 ;
            cents = cents - (c * 5);
        }
        //calculating number of pennies
        if (cents >= 1 && cents < 5)
        {
            k = cents / 1 ;
            cents = cents - (k * 1);
        }
    }
    total = quart + p + c + k ;
    printf("%i\n", total);

}
