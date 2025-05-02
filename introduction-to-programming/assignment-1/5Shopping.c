#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int amount;
    if (amount > 1000)
    {
        printf("I will buy Punjabi\n");
        if ((amount - 1000) >= 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else
        printf("Bad luck!");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
