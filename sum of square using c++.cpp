/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;



int main()
{
int i, sum=0,n;
  cout<<"enter the number"<<endl;
  cin>>n;
for(i=0;i<=n;i++)
sum=sum+i*i;
cout<<"sum of square="<<sum<<endl;
    return 0;
}