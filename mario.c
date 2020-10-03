#include <cs50.h>
#include <stdio.h>

int main(void)

{
    // Prompt for the user to enter the height range from 1 to 8. Otherwise reprompt height.     
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    //  Print hashes and spaces acording to height n.
    for (int i = 1; i <= n ; i++)
    {   
        // Print spaces (" ") between printed hashes #
        for (int k = n - 1; k >= i; k--)
        {
            printf(" ");
        }
   
        //  Left hashes #    
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("  ");
   
        //  Right hashes #
        for (int l = 0; l < i; l++)
        {
            printf("#");
        }
        //  Creates a newline for hashes # and space (" ")
        printf("\n");
    }
}
