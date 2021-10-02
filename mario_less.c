#include <stdio.h>
#include <cs50.h>

int main()
{
    //user prompt
    printf("Enter height from 1 to 8 (both inclusive) \n");

    //user input height
    int n;
    do
    {
        n = get_int("Height : ");
    }
    while (n < 1 || n > 8);

    //creating the main loop
    for (int i = 1; i <= n; i++)
    {
        //creating loop for blank space
        for (int j = i; j <= n-1; j++)
        {
            printf(" ");
        }

        //cretaing loop for hash
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }

        //entering the next line
        printf("\n");
    }
}