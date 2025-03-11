#include <iostream>
using namespace std;
void solve(int brr[])
{
    cout << "size inside solve function : " << sizeof(brr) << endl;//o/p-> 4 because array does not pass a pointer is pass which name is brr & which point the base address of the array
}
int main()
{

    int arr[10] = {1, 2, 3, 4, 5};
    cout << "size inside main function : " << sizeof(arr) << endl;//o/p-> 40
    solve(arr);
    return 0;
}

//array is pass by reference because on passing a array a pointer is passes in the function which points the base address of array 