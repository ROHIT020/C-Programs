#include<stdio.h>
int main()
{
    int a;
    printf("Enter the no.");
    scanf("%d",&a);
    if (a % 2==0&&a!=0)
    {
        printf("It is even no.");

    }
    else if (a%2!=0)
    {
        printf("It is an odd no.");
    }
    else(a==0);
    {
        printf("No. is neither even nor odd");

    }
    return 0;


}