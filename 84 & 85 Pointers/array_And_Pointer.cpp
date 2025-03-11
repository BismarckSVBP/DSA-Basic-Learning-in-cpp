// Note--> we can not change the address of a variable but we can change the pointing value which is pointed by a variable

#include <iostream>
using namespace std;

int main()
{

    // //integer array
    // int arr[5] = {1, 2, 3, 45, 5};

    // // cout << arr[0] << endl;  // value at base address
    // // cout << &arr[0] << endl; // base address of array
    // // cout << arr << endl;     // base address of array
    // // cout << &arr << endl;    // base address of array
    // // cout << *arr << endl;    // base address of array store value ko show karega
    // // cout << *(arr+1) << endl;// 1st index of array store value ko show karega

    // //note->  arr[i]==*(arr+i) == i[arr] ==*(i+arr)

    // // cout << *(arr+1) << endl;
    // // cout << *(1+arr) << endl;
    // // cout << 1[arr] << endl;
    // // cout << arr[1] << endl;

    // cout << *( arr+2) << endl;

    //  int *p = arr;
    // cout << p << endl;  // base address of array
    // cout << &p << endl; // address of pointer p
    // p++;//on incrementing pointer it will point next valur of the array but the address of the pointer will always constant not changing on increment    cout << p << endl;
    // cout << &p << endl;
    // cout << sizeof(p) << endl;
    // cout << sizeof(*p) << endl;





//     // character array
//     char ch[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', '\0'};
//   //Note - The implementation of cout is totally different in the char array & int array
//   //in the case of char array on printing the the name of array it will provide all the data inside it but in the case of integer array it will print the base address of the integer array

//     // char *c = &ch[0]; // we can not write as  char *c = &ch; 
//     //Or
//     char *c = ch;
//     cout << c << endl; //print abcdefghi
//     cout << *c << endl; //print only a not abcdefghi because *c == *(c+0) == c[0]

//     cout << &c << endl;
//     cout << ch << endl;//print abcdefghi
//     cout << &ch << endl;
//     cout << ch[0] << endl;  



// char name[9] = "AherBano";
//     char *c = &name[0];
//     cout << c << endl;
//     cout << *c << endl; 
//     cout << &c << endl;
//     cout << *(name+3) << endl;
//     cout << name << endl;
//     cout << &name << endl; 
//     cout << *(c+3) << endl;
//     cout << *(c)+3 << endl;    
//     cout << c+2  << endl;
//     cout << &name[0] << endl;







    //in case of a character not a character array
    // char ch = 'k'; 
    // char *c = &ch;
    // cout << c << endl;//It will garbage value whenever we will not null character
    // //o/p -> k$%$%






    //bad practice
    // char* k = "ABHAY";
    // cout << k << endl;
    // cout << sizeof(*k) << endl;







    return 0;
}
