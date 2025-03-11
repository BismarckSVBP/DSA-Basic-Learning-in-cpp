#include <iostream>
using namespace std;

// head recursion
void counting(int n)
{

    // base case
    if (n == 0)
    {
        return;
    }
    // recursion call
    counting(n - 1);

    // processing
    cout << n << endl;
    return;
}
// tail recursion
void ReverseCounting(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    // processing
    cout << n << endl;
    // recursion call
    ReverseCounting(n - 1);
    return;
}
int facto(int n)
{

    if (n == 1)
    {
        cout << n << "th factorial is :" << 1 << endl;
        return 1;
    }
    int ans = n * facto(n - 1);
    cout << n << "th factorial is :" << ans << endl;
    return ans;
}
int fibbo(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }
    return fibbo(n - 1) + fibbo(n - 2);
}
int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    cout << "Counting : " << endl;
    counting(n);
    cout << "ReverseCounting : " << endl;
    ReverseCounting(n);
    cout << "Factorial : " << endl;
    cout << n << "th factorial is :" << facto(n) << endl;
    cout << "Fibbonacci series : " << endl;
    cout << n << "th term of Fibbonacci series is :" << fibbo(n) << endl;
    return 0;
}