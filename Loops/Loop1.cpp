#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int target=0;
    while(n>0){
        target++;
        n=n/10;
    }
    cout<<target<<endl;
    return 0;
}