#include<iostream>
using namespace std;
int main()
{
    int a=4;
    cout<<sizeof(a)<<endl;  //4

    char name='a';
    cout<<sizeof(name)<<endl;  //1

    bool flag;
    a==name?flag=true:flag=false;  //false
    cout<<flag<<endl;
    cout<<(&a)<<endl;  //random adrress of a
    return 0;
}