#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i; j++)
        {
            printf(" ");
        }
        for (int l = 0; l < i + 1; l++)
        {
            printf("#");
        }
        printf("  ");
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}