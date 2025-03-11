// only for square matrix
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[4][3] = {{4, 2, 3}, {1, 40, 5}, {3, 0, 6}, {7, 8, 9}};

    int brr[3][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            brr[j][i] = arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
