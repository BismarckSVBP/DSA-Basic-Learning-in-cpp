// note -> if array is fully empty then garbage value will be inside it but if any of the element value exits then it all emnpty values will be intialises by zero

#include <iostream>
using namespace std;
void solve(int brr[])
{
    cout << "size inside solve function : " << sizeof(brr) << endl;

    cout <<"brr:"<< brr << endl;//base address of array
    cout <<"&brr:"<< &brr << endl;//address of pointer which is passes
    brr[0] = 50;  //*(brr+0)
}
int main()
{

    int arr[10] = {1, 2, 3, 4, 5};
    cout << "size inside main function : " << sizeof(arr) << endl;
    
    cout <<"arr:"<< arr << endl;
    cout <<"&arr:"<< &arr << endl;
    cout << "before calling solve function" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " " ;
    }
    cout <<endl;
    solve(arr);
    cout << "after calling solve function" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " " ;
    }
    return 0;
}
