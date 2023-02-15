#include<stdio.h>
#include<conio.h>
int main()
{
    int r;
     srand(time(NULL));
    r=rand()%2;
    printf("%d",r);
}
