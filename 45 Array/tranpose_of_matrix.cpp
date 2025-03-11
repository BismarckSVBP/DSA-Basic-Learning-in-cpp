// only for square matrix
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[][3] = {{4, 2, 3}, {1, 40, 5}, {3, 0, 6}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
