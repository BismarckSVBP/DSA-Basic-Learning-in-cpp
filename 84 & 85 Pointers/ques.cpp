#include <iostream>
using namespace std;
void update(int *p, int *q)
{
    *p = 200;
    *q = 300;
}
int main()
{
    int arr[4] = {10, 20, 30, 40};
    int *p = &arr[1];
    int *q = &arr[2];
    update(p, q);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}