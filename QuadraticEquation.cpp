#include<iostream>
#include<iomanip>
#include<math.h>
#include<conio.h>
using namespace std;
int main() {
    float a,b,c,x1,x2,dis,real,ima;
    cout<<"\t\tSolving Roots of a Quadratic Equation";
    cout<<"\n\nEnter a: "; cin>>a;
    cout<<"\nEnter b: "; cin>>b;
    cout<<"\nEnter c: "; cin>>c;
    dis=(pow(b,2))-(4*a*c);   
    if (dis>0) {
        x1=(-b+sqrt(dis))/(2*a);
        x2=(-b-sqrt(dis))/(2*a);
        cout<<"\nRoots are real but different.";
        cout<<"\nx1= "<<x1;
        cout<<"\nx2= "<<x2;}   
    else if (dis==0) {
        cout<<"\nRoots are real and the same.";
        x1=(-b+sqrt(dis))/(2*a);
        cout<<"\nx1= x2= "<<x1;}
    else {real=(-b)/(2*a);
        ima=sqrt(-dis)/(2*a);
        cout<<"Roots are complex but different.";
        cout<<"\nx1= "<<real<<"+"<< ima<<"i";
        cout<<"\nx2= "<<real<<"-"<< ima<<"i";}}
        
