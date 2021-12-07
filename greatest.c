#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("enter your number\n");
    scanf("%d", &a);
    printf("enter your number\n");
    scanf("%d", &b);

    printf("enter your number\n");
    scanf("%d", &c);
    printf("enter your number\n");
    scanf("%d", &d);
    if (a >= b && a >= c && a >= d)
    {
        printf("%d is greatses number", a);
    }
    else if (b >= a && b >= c && b >= d)
    {
        printf("%d is greatses number", b);
    }
    else if (c >= b && c >= a && c >= d)
    {
        printf("%d is greatses number", c);
    }
    else 
    {
        printf("%d is greatses number", d);
    }
    return 0;
}
