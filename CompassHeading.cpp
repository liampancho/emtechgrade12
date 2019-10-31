#include<iostream>
#include<iomanip> 
#include<math.h> 
#include<conio.h> 
using namespace std;
int main() {
	float c; 
    cout<<"\t\t\tCompass Heading"<<endl;
    cout<<"\nEnter Compass Heading (in degrees): "; cin>>c;
    
    if (c>=1&&c<90)   {cout<<"\nE "<<c<<" N";}
    if (c>90&&c<180)  {c=180-c; cout<<"\nS "<<c<<" E";}
    if (c>180&&c<270) {c=270-c; cout<<"\nW "<<c<<" S";}
    if (c>270&&c<360) {c=360-c; cout<<"\nW "<<c<<" N";}
    if (c==0||c==360)  {cout<<"\n0 N";}
    if (c==90)         {cout<<"\n0 E";}
    if (c==180)        {cout<<"\n0 S";}
    if (c==270)        {cout<<"\n0 W";} }
    
