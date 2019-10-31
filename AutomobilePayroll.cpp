#include<iostream>
#include<iomanip>
#include<math.h>
#include<conio.h>
using namespace std;
int main() { 
	float x,hr,ot,net,tax,reg,gro,rate; char code;
	cout<<"\t\tAutomobile Repair Shop Payroll Program";
	cout<<"\n\nFull Time or Part Time(F/P): "; cin>>code;
	switch(code) {
	case 'F':
	case 'f':if(hr<=40.0);
	    	cout<<"\nEnter Pay Rate: "<<fixed<<setprecision(2); cin>>rate;
        	cout<<"\nPlease input number of hours worked: "; cin>>hr;
			reg=rate*hr; gro=reg; tax=gro*0.30; net=gro-tax;
            cout<<"\n\tGross Pay=PHP "<<gro;
	        cout<<"\n\tTax =PHP "<<tax;
	        cout<<"\n\tNet Pay =PHP "<<net;
			 break;
			if(hr>40.0);
			cout<<"\nEnter Pay Rate: "<<fixed<<setprecision(2); cin>>rate;
        	cout<<"\nPlease input number of hours worked: "; cin>>hr;
			reg=rate*40.0; x=1.5; ot=(x*rate*hr)/40.0; gro=reg+ot;
			tax=gro*0.30;	net=gro-tax;
            cout<<"\n\tGross Pay=PHP "<<gro;
            cout<<"\n\tTax =PHP "<<tax;
            cout<<"\n\tNet Pay =PHP "<<net;		
			 break;					
	case 'P':
	case 'p':if(hr<=40.0);
	        cout<<"\nEnter Pay Rate: "<<fixed<<setprecision(2); cin>>rate;
        	cout<<"\nPlease input number of hours worked: "; cin>>hr;
			reg=rate*hr; gro=reg; tax=gro*0.20; net=gro-tax;
            cout<<"\n\tGross Pay=PHP "<<gro;
          	cout<<"\n\tTax =PHP "<<tax;
	        cout<<"\n\tNet Pay =PHP "<<net;
			 break;
			if(hr>40);
			cout<<"\nEnter Pay Rate: "<<fixed<<setprecision(2); cin>>rate;
        	cout<<"\nPlease input number of hours worked: "; cin>>hr;
			reg=rate*40.0; x=1.2; ot=(x*hr*rate)/40.0; gro=reg+ot;
		    tax=gro*0.20;	net=gro-tax;
            cout<<"\n\tGross Pay=PHP "<<gro;
          	cout<<"\n\tTax =PHP "<<tax;
	        cout<<"\n\tNet Pay =PHP "<<net;
			    break;
	default: 
	{cout<<"ERROR!";return 0;}}		         }
			
	 
