#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 8};
    int N = 8;
    int sum = 0;
    int sumfrom1toN = (N * (N + 1)) / 2;
    for (int i = 0; i < N - 1; i++)
    {
        sum = sum + arr[i];
    }

    cout << sumfrom1toN - sum << endl;

    return 0;
}
