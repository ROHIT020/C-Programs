#include<iostream>
using namespace std;
int add(int a,int b){
    int sum=a+b;
    return sum;
}
int add(int a,int b,int c){
    int sum=a+b+c;
    return sum;
}
float add(float x,float y,float z){
    float sum=x+y+z;
    return sum;
}
int main()
{
    int a=5;
    int b=7;
    float x=2.1;
    float y=4.1;
    float z=5.2;
    cout<<add(x,y,z)<<endl;
    return 0;
}