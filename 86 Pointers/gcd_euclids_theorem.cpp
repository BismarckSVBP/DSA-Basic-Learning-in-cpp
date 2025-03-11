#include <iostream>
using namespace std;
int gcd(int a, int b)
{

    if (a > 0 && b > 0)
    {
        while (a > 0 && b > 0)
        {
            if (a >= b)
            {
                a = a - b;
            }
            else
            {
                b = b - a;
            }
        }
    }
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
}
int main()
{
    int m;
    cout << "Enter 1st number : ";
    cin >> m;
    int n;
    cout << "Enter 2nd number : ";
    cin >> n;

    int hcf = gcd(m, n);
    cout << hcf <<endl;


    return 0;
}