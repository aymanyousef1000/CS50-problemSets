#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// change ASCII to char function
char intToAscii(int number)
{
    return number;
}
//Main Function
int main(int argc, string argv[])
{

    if (argc == 2)
    {

// checking if arguments is integers or no
        int sum = 0;
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (argv[1][i] >= 48 && argv[1][i] <= 57)
            {
                sum = sum + 0;
            }
            else
            {
                sum = sum + 1;
            }
        }

        
// check and print of input is numbers
        if (sum == 0)
        {
            int key = atoi(argv[1]);
            string s = get_string("plaintext:  ");
            int c1, c2, c3, ci;  
            printf("ciphertext: ");
            for (int i = 0 ; i < strlen(s); i++)
            {
                // chech upper 
                if (s[i] >= 65 && s[i] <= 90)
                {
                    c1 = s[i] - 65;
                    c2 = c1 + key ; 
                    c3 = c2 % 26;
                    ci = c3 + 65;
                    printf("%c", intToAscii(ci));
                }
                else if (s[i] >= 97 && s[i] <= 122)
                {
                    c1 = s[i] - 97;
                    c2 = c1 + key ; 
                    c3 = c2 % 26;
                    ci = c3 + 97;
                    printf("%c", intToAscii(ci));
                }
                else
                {
                    // if not UPPER or LOWWER cases
                    printf("%c", intToAscii(s[i]));
                }
              
            }
            printf("\n");  
        }
        else
        {
            // wrong input
            printf("Usage: ./caesar key");
            return 1;
        }




    }
    else 
    {
        //wrong input
        printf("Usage: ./caesar key");
        return 1;
    }
        
}