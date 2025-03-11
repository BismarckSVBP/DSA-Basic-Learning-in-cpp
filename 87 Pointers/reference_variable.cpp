//run on online compiler


#include <iostream>
using namespace std;

int main()
{

    int a = 5;
    //reference variable -> In this different variable name assign to same memory location here a & b both are pointing same memory location 
    //reference variable syntax
    // b is the reference variable pointing to the same memory location as a
    int& b = a;
    




    cout << a << endl;

    cout << b << endl;
    
    //on performing any operation on a it will be shown that operation on b  & vice-versa because both they are pointing same memory location
    

    // on changing in a 
    a++;
    cout << a << endl;

    cout << b << endl;    
    
    
     // on changing in b
    b++;
    
    cout << a << endl;

    cout << b << endl;

    return 0;
}

// note -> 1).we can not set a reference variable on NULL but we can set a pointer on NULL show that safety is more in the case of reference variable means reference variable always a points a valid variable

// 2). readability is more in case of reference operator but in the case of pointer readability is very difficult which make pointer tough to learn
