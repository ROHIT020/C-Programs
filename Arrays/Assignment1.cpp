#include<iostream>
using namespace std;

// Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.
int main()
{
    int arr[]={2,3,4,5};
    int n=4;
    int count_odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count_odd++;
        }
    }
    return count_odd;
}