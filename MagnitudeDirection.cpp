#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{  
   float mag1,mag2,mag3,dir1,dir2,dir3,Ax,Ay,Bx,By,Cx,Cy,Rx,Ry,Resultant,Direction;
   float pi=3.1416/180.0;
   float rpi=180.0/3.1416;
   cout<<fixed<<setprecision(2);
   cout<<"Computing for the Resultant and Direction given the Magnitude and Direction"<<endl;
   cout<<endl<<"Enter the Magnitude:  "<<endl;
   cin>>mag1>>mag2>>mag3;
   cout<<endl<<"Enter the Direction:  ";
   cin>>dir1>>dir2>>dir3;
   Ax=mag1*cos(dir1*pi); 
   Ay=mag1*sin(dir1*pi);
   Bx=mag2*cos(dir2*pi);
   By=mag2*sin(dir2*pi);
   Cx=mag3*cos(dir3*pi);
   Cy=mag3*sin(dir3*pi);
   Rx=Ax+Bx+Cx;
   Ry=Ay+By+Cy;
   Resultant=(sqrt(pow(Rx,2)+pow(Ry,2)));
   Direction=(atan(Ry/Rx))*(rpi);
   cout<<endl<<"Resultant=  "<<Resultant<<endl<<"Direction=  "<<Direction<<endl;
}
