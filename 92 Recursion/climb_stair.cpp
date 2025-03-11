// by me
#include <iostream>
using namespace std;

void noOfsteps(int n, int &count)
{

    if (n == 1 || n == 0)
    {
        count++;
        return;
    }
    noOfsteps(n - 1, count);

    noOfsteps(n - 2, count);
    return;
}
int main()
{
    int n;
    cout << "Enter number of stairs : ";
    cin >> n;
    int count = 0;
    noOfsteps(n, count);
    cout << count << endl;

    return 0;
}

////by master

// #include <iostream>
// using namespace std;

// int noOfsteps(int n)
// {

//     if (n == 1 || n == 0)
//     {

//         return 1;
//     }
//     int ans = noOfsteps(n - 1) + noOfsteps(n - 2);
//     return ans;
// }
// int main()
// {
//     int n;
//     cout << "Enter number of stairs : ";
//     cin >> n;
//     int count = noOfsteps(n);
//     cout << count << endl;

//     return 0;
// }
