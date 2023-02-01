/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


// using namespace std;

int main()
{   double n,fact=1,i,sum=0;
cout<<"enter the number";
cin>>n;
for(i=1;i<=n;i++)
{
    if(i<=n)
fact=fact*i;

sum=sum+fact/i;
}
cout<<"the factorial of"<<n<< "is"<<sum;
            
}