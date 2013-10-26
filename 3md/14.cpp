/*
 * 14. uzdevums
 * 
 *  Sastādīt programmu, kas ekrānā izdrukā kalendāru vienam mēnesim 
 * (mēneša nosaukumu un mēneša pirmajam datumam atbilstošo dienas 
 *  numuru ievada lietotājs). 
 * 
 *    
 * Rezultāts: Parodija
 */

#include <iostream>
#include <stdlib.h>     
 
   

using namespace std;

int main(int argc, char **argv)
{
 
 int diena=0, br;
 char menesis[30];
  
 
 cout<<"Ievadi mēneša nosaukumu: ";
 cin>>menesis;
 cout<<"Ievadi dienas numuru ar kuru sāksies menesis: ";
 cin>>diena;
 
 cout<<"-------------------------------"<<endl;
 cout<<"|";
 
 for(int z=0; z<32; z++){
	 if(menesis[z]>0) {cout<<menesis[z]; } else {cout<<"#";}
 }
 cout<<"|"<<endl;
 cout<<"-------------------------------"<<endl;
 cout<<"| pr | ot| tr| ce| pk| se| sv |"<<endl; 
 cout<<"|";
 
 for(int h=diena;h>1;h--){
	 cout<<"    ";
 }
 
 br = 7-diena+1; //7-5=2
 for (int d=1; d<30; d++){
		if(br==0) {
			cout <<" |"<<endl<<"|";
			br=7;
		}
		br--;
		
		if(d<10) { cout<<"   "<<d; } else {cout<<"  "<<d;}
   
 } 
  cout<<endl<<"-------------------------------"<<endl;
   	
 return 0;
}



