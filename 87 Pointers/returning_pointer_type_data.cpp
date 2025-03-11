//run on online compiler


#include <iostream>
using namespace std;
int *solve()
{
    int a = 5;
    int *ans = &a;
    cout << &a << endl; // address of a
    return ans;
}
int main()
{
    cout << solve() << endl; // address of a

    return 0;
}