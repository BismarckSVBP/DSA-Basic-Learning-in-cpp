#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int*p = &a;
    int**q = &p;
    cout << "value of a :" << a << endl;//5
    cout << "address of a :" << &a << endl;//address of a
    cout << "address of a :" << p << endl;//address of a
    cout << "value of a :" << *p << endl;//5
    cout << "address of p :" << &p << endl;//address of p
    cout << "address of p :" << q << endl;//address of p
    cout << "address of a :" << *q << endl;//address of p
    cout << "value of a :" << **q << endl;//5
    cout << "address of q :"<< &q << endl;//address of q




    return 0;
}