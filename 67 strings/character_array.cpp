#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    // // cin is take only one word input we use space or tab than from tab or space it will not take input
    // //when we take a char array input as below than by default a null character is placed at last of the array

    // char name[100];
    // cout << "Enter your name :";
    // cin >> name;
    // cout << name;






    // // for multiword we use cin.getline(arr,100);
    // // we can set the delimeter in cin.getline(arr,100); 
    // // in the delimeter we tells the computer where we need to stop taking input
    // // 100 tells us maximum number that can be iputed

    // char arr[100];
    //  cout << "Enter your name :";
    // cin.getline(arr, 100);
    // cout << arr;









    // in vs code when we give less number of space compare to the input than the computer creates automatically two spaces in 1st space it put garbage value in the second space it take a null charcter but it will show different-2 behaviour in the different - 2 compiler 
    // char name[4];
    // cout << "Enter your name :";
    // cin >> name;
    // int i = 0;
    // while (name[i] != '\0')
    // {
    //     cout << i << name[i] << " ";
    //     i++;
    // }
    // cout << endl;
    // cout << "Null character at the index "<< i;



// // input -> ABHAY KUMAR KASAUDHAN@RAM
// char arr[20];
// cout << "Enter your input :";
// cin >> arr;
// cout << arr << endl;//it will print first word
// cin.getline(arr,20,'@');
// cout << arr;//it will print all words expect the 1st word it also prints the space after the first word but @ is the delimeter so that it will not print after the @




    // // we can find the length of the string by using the functions arr.length
    char sentence[] = "Abhay is Bismarck";
    cout << sentence << endl;
    int a = strlen(sentence);
    cout << a << endl;





  
    return 0;
}

