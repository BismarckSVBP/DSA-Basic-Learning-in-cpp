#include <iostream>
using namespace std;
int main()
{
    long long int x = 1;
    for (int i = 1; i <= 50; i++)
    {
        x = x * i;
    }
    cout<< x;
    return 0;
}