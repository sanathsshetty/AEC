/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main() {
    int x,y;
    cout<<"Enter the number of following you have!!:"<<endl;
    cin>>x;
    cout<<"Enter the number of followers you have:"<<endl;
    cin>>y;
    if(y==10*x)
    {
        cout<<"ACCOUNT IS SPAMED:"<<endl;
        
    }
    else
    {
        cout<<"ACCOUNT IS NOT SPAMED:"<<endl;
    }

    return 0;
}