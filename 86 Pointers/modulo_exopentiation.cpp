//(m^n)%o==modulo exponentiation

#include <iostream>
using namespace std;
int moduleoexopnentiationFn(int m, int n, int o)
{
    int ans = 1;
    while (n > 0)
    {
        if (n & 1 == 1)
        {
            // odd checking
            ans = (ans * m) % o;
        }
        m = (m * m) % o;
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
    int o;
    cout << "Enter modulo number : ";
    cin >> o;

    int moduleoexopnentiation = moduleoexopnentiationFn(m, n, o);
    cout << moduleoexopnentiation << endl;

    return 0;
}