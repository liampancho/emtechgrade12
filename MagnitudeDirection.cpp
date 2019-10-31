#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{  
   float m1,m2,d1,d2,w,x,y,z,s,p,r,d;
   float pi=3.1416/180.0;
   float rpi=180/3.1416;
   cout<<fixed<<setprecision(2);
   cout<<"Computing for the Resultant and Direction given the Magnitude and Direction"<<endl;
   cout<<endl<<"Enter the Magnitude:  ";
   cin>>m1>>m2;
   cout<<endl<<"Enter the Direction:  ";
   cin>>d1>>d2;
   w=m1*cos(m2*pi); x=m1*sin(m2*pi); y=d1*cos(d2*pi);
   z=d1*sin(d2*pi); s=w+y; p=x+z;
   r=(sqrt(pow(s,2)+pow(p,2)));
   d=atan(p/s)*(rpi);
   cout<<endl<<"Resultant=  "<<r<<endl<<"Direction=  "<<d<<endl;
}

