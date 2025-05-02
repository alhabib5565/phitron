#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    int val;
    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &val);

        if (val < 0)
            printf("%d ", 2);
        else if (val > 0)
            printf("%d ", 1);
        else
            printf("%d ", 0);
    }
}

/*
Given a number N and an array A of N numbers. Print the array after doing the following operations:

Replace every positive number by 1.
Replace every negative number by 2.
Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-105  ≤  Ai  ≤  105).

Output
Print the array after the replacement and it's values separated by space.
 */