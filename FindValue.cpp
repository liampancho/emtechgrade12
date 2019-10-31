#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{  
  float a,b,C,x,arcy,ay,sy,zy,xy,fy,aa,y,z;
  float pi=3.1416;
  float deg=3.1416/180;
  float rad=180/3.1416;
  cout<<fixed<<setprecision(4);
  cout<<"Enter the value of a:  "; cin>>a;
  if(!cin){cout<<"ERROR!"; return 0;}
  cout<<endl<<"Enter the value of b:  "; cin>>b;
  if(!cin){cout<<"ERROR!"; return 0;}
  cout<<endl<<"Enter the value of C (An angle in degrees):  ";cin>>C;C=C*deg;
  if(!cin){cout<<"ERROR!"; return 0;}
  x=(((10*3.1416)/(a+b))*(pow(sin(C),3))+3*(log(a)*tan(C)));
  arcy=atan(a*x)*rad;
  ay=exp(a/b)*arcy;
  sy=sqrt(pow(a,2)+pow(b,2));
  aa=pow((3*pow(x,2)+(pow(a,2)))/(b+2*a),5/3.0);
  y=(ay/sy)+aa;
  z=(1/4.0)*sqrt(2*pow(x,2)+pow(y,2)-2*x*y*cos(C));
  cout<<endl<<"X=  "<<x<<endl<<"Y=  "<<y<<endl<<"Z=  "<<z;
}

