#include <iostream>
using namespace std;
int power(int m, int n)
{
    int ans = 1;
    while (n > 0)
    {
        if (n & 1 == 1)
        {
            // odd checking
            ans = ans * m;
        }
        m = m * m;
        n = n >> 1;
    }
    return ans;
}
int main()
{
    int m;
    cout << "Enter base number : ";
    cin >> m;
    int n;
    cout << "Enter power number : ";
    cin >> n;
    int exoponent = power(m, n);
    cout << exoponent << endl;

    return 0;
}