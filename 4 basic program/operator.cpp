#include <iostream>
using namespace std;
int main()
{
    int a = 19.6;
    int b = 4.5674;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;

    double c = 19.6;
    float d = 4.5674;
    cout << c + d << endl;
    cout << c - d << endl;
    cout << c * d << endl;
    cout << c / d << endl;
    cout << (c > d && a > b) << endl;
    cout << (c > d || a > b) << endl;
    cout << (c != d) << endl;
    cout << (c == d) << endl;
}