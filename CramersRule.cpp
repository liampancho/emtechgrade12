#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{  
    float a,b,c,d,e,f,g,h,i,x,y,z,p;
    cout<<"The Value of a 3x3 Determinant using Cramer's Rule"<<endl;
    cout<<endl<<"Enter the 3 numbers on the 1st row of the 3x3 matrix:  ";
    cin>>a>>b>>c;
    cout<<endl<<"Enter the 3 numbers on the 2nd row of the 3x3 matrix:  ";
    cin>>d>>e>>f;
    cout<<endl<<"Enter the 3 numbers on the 3rd row of the 3x3 matrix:  ";
    cin>>g>>h>>i;
    x=a*((e*i)-(h*f));
    y=b*((d*i)-(g*f));
    z=c*((d*h)-(g*e));
    p=x-y+z;
    cout<<endl<<"Determinant=  "<<p;
}

