#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //get height from user
    int height;
    //checking height
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0 || height > 8);
    
    
    for (int i = 0 ; i < height ; i++)
    {
        //make a speces pyramid
        for (int j = height - 1 ; j > i ; j--)
        {
            printf(" ");
        }
        //make a hashes pyramid
        for (int j = -1 ; j < i ; j++)
        {
            printf("#");
        }
        printf("\n");

    }
}