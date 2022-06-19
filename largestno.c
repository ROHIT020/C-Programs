#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first num =");
    scanf("%d",&a);
    printf("Enter the second num =");
    scanf("%d",&b);
    printf("Enter the third num =");
    scanf("%d",&c);
    if (a<b && a<c)     
    {
    printf("%d is smallest",a);
    }
    else if (b<a && b<c)
    {
        printf("%d is smallest",b);
    }
    else 
    printf("%d is smallest ",c);
    return 0;
    
}