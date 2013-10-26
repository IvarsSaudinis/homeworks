/*
 *  11. uzdevums
 *
 * Sastādīt programmu, kas pieprasa ievadīt divus skaitļus 
 * a un b - intervāla galapunktus (a<b) un vēl vienu skaitli c.
 * Pārbaudīt vai ievadītais skaitlis c pieder intervālam [a;b]. 
 */


#include <iostream>
 

using namespace std;

int main(int argc, char **argv)
{
   

int  x, y,c;
 
 
 cout<<"Ievadi 1. skaitli ";
 cin>>x;
 
 cout<<"Ievadi 2. skaitli ";
 cin>>y;
 
 cout<<"Ievadi 3. skaitli ";
 cin>>c;
  
 if((c>=x)&&(c<=y)){
	 cout<<"Skaitlis "<<c<<" pieder intervālam ["<<x<<","<<y<<"]";
	 
	} else {
	  cout<<"Skaitlis "<<c<<" nepieder intervālam ["<<x<<","<<y<<"]";
	 }
	 
  
  
 

 
 	
 return 0;
}



