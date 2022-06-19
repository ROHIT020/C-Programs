#include<stdio.h>
int sum ( int a,int b)
{
    return a+b;
}
int main()
{
int a,b,c;
a=23;
b=45;
c = sum(a,b);
printf("The sum is %d\n",c);
return 0;
}
