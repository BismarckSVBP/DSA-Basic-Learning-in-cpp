#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{
    int arr[][3] = {{4, 2, 3}, {1, 40, 5}, {3, 0, 6}};
    int ans = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (ans < arr[i][j])
            {
                ans = arr[i][j];
            }
        }
    }

cout << ans ;
    return 0;
}
