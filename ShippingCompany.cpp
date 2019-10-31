#include<iostream>
#include<iomanip> 
#include<math.h> 
#include<conio.h> 
using namespace std;
int main() {
	float wei,dis,cha,sd,tch,vat; char pt;	
    cout<<"\t\t\t\tShipping Company"<<fixed<<setprecision(2);
    cout<<"\nEnter Package Type (A or B): "; cin>>pt;
   	cout<<"\nEnter weight of the package in kg (0-20): "; cin>>wei;
   	cout<<"\nEnter the distance in km: "; cin>>dis;
	if (dis<=500||dis==500) {sd=1;} if (dis>500) {sd=(dis/500.0);}
    if (wei>20) {cout<<"\nINVALID"; return 0;}  
	switch(pt) {
    	case 'a':
    	case 'A': if(wei<=5)
			    { cha=(wei*10.50*sd); vat=cha*0.10;
		          tch=cha+vat;
		          cout<<"\nThe charge is= PHP"<<cha;
		          cout<<"\nThe total charge is= PHP"<<tch;}		         
    	     else if (wei>5&&wei<=10)
			    { cha=(wei*15.75*sd); vat=cha*0.10;
		          tch=cha+vat;
		          cout<<"\nThe charge is= PHP"<<cha;
		          cout<<"\nThe total charge is= PHP"<<tch;}		        
			 else if (wei>10&&wei<=20)
			    { cha=(wei*20.65*sd); vat=cha*0.10;
		          tch=cha+vat;
		          cout<<"\nThe charge is= PHP"<<cha;
		          cout<<"\nThe total charge is= PHP"<<tch;} break;			    	      
        case 'b':
    	case 'B': if(wei<=5)
		        { cha=(wei*11.75*sd); vat=cha*0.10;
		          tch=cha+vat;
		          cout<<"\nThe charge is= PHP"<<cha;
		          cout<<"\nThe total charge is= PHP"<<tch;} 
    	     else if (wei>5&&wei<=10)
			    { cha=(wei*18.50*sd); vat=cha*0.10;
		          tch=cha+vat;
		          cout<<"\nThe charge is= PHP"<<cha;
		          cout<<"\nThe total charge is= PHP"<<tch;} 
			 else if (wei>10&&wei<=20)
			    { cha=(wei*23.65*sd); vat=cha*0.10;
		          tch=cha+vat;
		          cout<<"\nThe charge is= PHP"<<cha;
		          cout<<"\nThe total charge is= PHP"<<tch;}break;	      
       	case 'c':
    	case 'C': if(wei<=5)
		        { cha=(wei*10.50*sd); vat=cha*0.10;
		          tch=cha+vat;
		          cout<<"\nThe charge is= PHP"<<cha;
		          cout<<"\nThe total charge is= PHP"<<tch;
		        } 
    	     else if (wei>5&&wei<=10)
			    { cha=(wei*15.75*sd); vat=cha*0.10;
		          tch=cha+vat;
		          cout<<"\nThe charge is= PHP"<<cha;
		          cout<<"\nThe total charge is= PHP"<<tch;
		        } 
			 else if (wei>10&&wei<=20)
			    { cha=(wei*20.65*sd); vat=cha*0.10;
		          tch=cha+vat;
		          cout<<"\nThe charge is= PHP"<<cha;
		          cout<<"\nThe total charge is= PHP"<<tch;}break;	      
	    default: cout<<"\nINVALID";  return 0;}}
