#include <iostream>
using namespace std;
int main()
{
    int arr[3][4] = {
        {12, 13, 14, 15},
        {16, 17, 18, 19},
        {20, 21, 22, 23}};

    for(int r=0;r<3;r++){
        for (int i = 0; i < 4; i++)
        {
            cout << " " << arr[r][i];
        }
        cout << endl;
    }
    return 0;
}