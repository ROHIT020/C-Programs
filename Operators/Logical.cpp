#include<iostream>
using namespace std;
int main()
{
    int p=15,q=10,r=5;

    cout << ((p > q) && (p > r))<<endl; // true
    cout << ((p > q) && (p < r))<<endl; // false

    // || operator

    cout << ((r < q) || (p < q))<<endl; // true
    cout << ((p > q) || (q > r))<<endl; // true
    cout << ((p < q) || (p < r))<<endl; // false

    // ! operator

    cout << (!(p == q))<<endl; // true
    cout << (!(p > q))<<endl;  // false
    return 0;
}