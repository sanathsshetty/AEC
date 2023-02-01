/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
 
int main() {
    int X, Y, T;
    cout << "Enter the number of test case: ";
    cin >> T;
    for(int i=0; i<T; i++) {
        cout << "Enter the prices of two chocolates: ";
        cin >> X >> Y;
        if(X>Y) {
            cout << "Second chocolate is cheaper." << endl;
        }
        else if (X<Y) {
            cout << "First chocolate is cheaper." << endl;
        } else {
            cout << "Any" << endl;
        }
    }
    return 0;
}