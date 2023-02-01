/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
 
int main() {
    int ch, vol, chng;
    cout << "Enter your volume: ";
    cin >> vol;
    while(ch!=3) {
        cout << "1. Increase Volume \n2. Decrease Volume \n3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        if (ch==1 || ch==2){
            cout << "Enter the volume you want: ";
            cin >> chng;
        }
        switch(ch) {
            case 1:
                cout << "The present volume is " << (chng) << " & steps taken is " << (chng-vol)<< endl;
                break;
            case 2:
                cout << "The present volume is " << ((chng>vol)?0:chng) << " & steps taken is " << (((chng>vol)?vol:(vol-chng))) << endl;
                break;
            //case 3:
                //return 0;
        }
    }
    return 0;
}