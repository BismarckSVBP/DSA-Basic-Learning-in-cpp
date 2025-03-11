#include <iostream>
using namespace std;

int main()
{

    int a = 5;
    int *p = &a;
    int **q = &p;

    // cout << a << endl;
    // cout << &a << endl;
    // cout << p << endl;
    // cout << *p << endl;
    // cout << &p << endl;
    // cout << q << endl;
    // cout << *q << endl;
    // cout << **q << endl;
    // cout << &q << endl;





    // we can not perform this type of conversion this will show error
    //  **q = *q+1;
    //  **q =  p;//here we try to give a pointer directly a integer data which is not possible 



//note->

//here *p  == address of a ke ander store value
//*q == address of p ke ander store value
//**q ==  address of *q ke ander store value
    return 0;
}