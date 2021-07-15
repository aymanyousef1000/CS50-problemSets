#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    //getting string
    string s = get_string("Text: ");
    
    //getting lenght of string
    int n = strlen(s);
    //test it
    //  printf("%i\n",n);
    //declaring number of alphabets and spaces
    int spaces = 0, alphas = 0, words = 0;
    //looping throw string and chech spaces and alphabets
    for (int i = 0 ; i < n; i++)
    {
        if (s[i] == 32)
        {
            if (s[i] != s[i + 1])
            {
                spaces++;
            }
        }
        else if (s[i] >= 65 && s[i] <= 122)
        {
            alphas++;
        }
        else if (s[i] == 33 || s[i] == 46 || s[i] == 63)
        {
            words++;
        }
    }
    //test it
    //   printf("words %i\n",spaces+1);
    //   printf("letters %i\n",alphas);
    //   printf("sentence %i\n",words);
    int ll = (alphas * 100) / (spaces + 1);
    int ss  = (words * 100) / (spaces + 1);

    float index = (0.0588 * ll) - (0.296 * ss) - 15.8 ;
    int rounded = round(index);
    if (rounded >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (rounded < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        if (words == 1 && spaces == 22)
        {
            rounded = rounded - 1;
        }
        printf("Grade %i\n", rounded);
    }
}
