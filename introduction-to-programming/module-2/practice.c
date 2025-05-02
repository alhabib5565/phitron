#include <stdio.h>
int main()
{
    // odd even problem
    int a;
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is even number", a);
    }
    else
    {
        printf("%d is Odd number", a);
    };

    // prosative or negative
    int num;
    scanf("%d", &num);
    if (num >= 0)
    {
        printf("%d is prositive number", num);
    }
    else
    {
        printf("%d is nagetive number", num);
    }

    return 0;
}
// if - else ladder ki ?
// if - else ladder holo ekdhoroner control structure ja use kora hoy ekadhik condition check korar jonno.Eta sequentially check kore — prothom je condition true hoy, oi block e dhuke, baaki gulake check kore na.