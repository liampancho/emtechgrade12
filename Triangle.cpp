#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c,s,A,B,C,M,N,P,R;
	float pi=3.1416; float rad=180/pi;
	float deg=pi/180;
	cout<<fixed<<setprecision(3);
	cout<<"Computing for the Area, Median, Sides, and Angles of a Triangle";
	cout<<"\n\nEnter side b:  "; cin>>b;
	if(b<=0){cout<<"ERROR!";return 0;}
	cout<<"\nEnter side c:  "; cin>>c;
	if(c<=0){cout<<"ERROR!";return 0;}
	cout<<endl<<"Enter angle A in degrees:  ";cin>>A;
	if(A<=0){cout<<"ERROR!";return 0;}
	a=sqrt(pow(b,2)+pow(c,2)-2*b*c*cos(A*deg));
    B=asin(b*sin(A*deg)/a)*rad; C=180-(A+B); 
    s=(a+b+c)/2;
	R=sqrt(s*(s-a)*(s-b)*(s-c));
	M=(0.5)*sqrt(2*pow(a,2)+2*pow(c,2)-pow(b,2));
	N=(0.5)*sqrt(2*pow(b,2)+2*pow(c,2)-pow(a,2));
	P=(0.5)*sqrt(2*pow(a,2)+2*pow(b,2)-pow(c,2));
	cout<<endl<<"Side a= "<<a<<endl<<"Side b= "<<b<<endl<<"Side c=  "<<c
	<<endl<<"Angle A=  "<<A<<endl<<"Angle B= "<<B<<endl<<"Angle C= "<<C<<endl
	<<"Area=  "<<R<<endl<<"Median of M= "<<M<<endl<<"Median of N= "<<N
	<<endl<<"Median of N= "<<N<<endl<<"Median of P= "<<P;
}

