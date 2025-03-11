#include <iostream>
using namespace std;
int main()
{
    // int a = 5;
    // // creation of a pointer (b is a pointer to integer data)
    // //& -> it is an address of operator

    // int *b = &a;
    // // access the pointer
    // // by using dereferencing operator(*)
    // cout << *b << endl;
    // cout << b << endl;

    // int p = 5;
    // int *q = &p;
    // cout << sizeof(q) << endl;

    // double r = 5.2;
    // double *s = &r;
    // cout << sizeof(s) << endl;
    // char t = 'a';
    // char *u = &t;

    // cout << sizeof(u) << endl;

    // //Bad Practice
    // // int *ptr;
    // // cout << *ptr << endl;

    // //(Good Practice)
    // //Null pointer
    // // int *ptr2 = 0  ;
    // // int *ptr2 = NULL  ;
    // int *ptr2 = nullptr  ;
    // cout << *ptr2 << endl;


    // int a=5;
    // int *ptr3 = &a  ;
    // cout << *ptr3 << endl;
    // cout << *ptr3 + 1 << endl;//ptr ki add resspar store value main ek ka addition ho jayega
    // cout << (ptr3) << endl;
    // cout << (ptr3 + 1) << endl; // ek integer jitna space leta hai utne ka addition ho jata hai
    // cout << *(ptr3 + 1) << endl;//garbage value dega


    // //arthmatic operation on pointer 
    // cout << a << endl;
    // cout << &a << endl;
    // cout << ptr3  << endl;
    // cout << *(ptr3) << endl;
    // cout << &ptr3  << endl;
    // cout << (*ptr3)*2 << endl;
    // cout << (*ptr3)++ << endl;
    // cout << ++(*ptr3) << endl;
    // cout << *(ptr3)+2 << endl;
    // cout << a+1 << endl; 
    // cout << (*(ptr3))*2 << endl;
    // cout << (*ptr3)/2 << endl;


    int k = 5;
    int *ptr = &k;
    //make a copy of value which is present on the location of pointer
    int *ptr2 = ptr;
    int *ptr3 = ptr2;
    cout << k << endl; // 5
    cout << &k << endl;//address of k
    cout << ptr << endl;//address of k
    cout << &ptr << endl;//address of ptr
    cout << *ptr << endl;//value at store at pointer ptr
    cout << ptr2 << endl;//address of k
    cout << &ptr2 << endl;//address of ptr2
    cout << *ptr2 << endl;//value at store at pointer ptr2
    cout << ptr3 << endl;//address of k
    cout << &ptr3 << endl;//address of ptr3
    cout << *ptr3 << endl;//value at store at pointer ptr3  
    cout << *ptr/2 << endl;//half of value at store at pointer ptr
    cout << *ptr2/2 << endl;//half of value at store at pointer ptr




    return 0;





}