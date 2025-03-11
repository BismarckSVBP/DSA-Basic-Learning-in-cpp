

// #include<iostream>
// using namespace std;
// void toh(int n,char source,char help,char destination ,int &count){
//     if(n==1){
//         return ;
//     }
// toh(n-1,source,destination,help,++count );
// toh(n-1,help,source,destination,++count );
// }
// int main(){
//     int n;
//     cin >> n;
//     int count =1;
//     toh(n,'A','B','C',count );
//     cout << count;
//     return 0;
// }




#include <iostream>
using namespace std;

// Tower of Hanoi function
void toh(int n, char source, char help, char destination, int &count) {
    // Base case: When there is only one disk, move it directly
    if (n == 1) {
        cout << "Move disk 1 from rod " << source << " to rod " << destination << endl;
        count++; // Increment move count
        return;
    }

    // Move n-1 disks from source to help (auxiliary rod)
    toh(n - 1, source, destination, help, count);

    // Move the nth disk from source to destination
    cout << "Move disk " << n << " from rod " << source << " to rod " << destination << endl;
    count++; // Increment move count

    // Move n-1 disks from help (auxiliary rod) to destination
    toh(n - 1, help, source, destination, count);
}

int main() {
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;

    int count = 0; // Initialize move counter to 0
    toh(n, 'A', 'B', 'C', count); // A -> source, B -> auxiliary, C -> destination
    cout << "Total moves: " << count << endl;

    return 0;
}
