/*
 * 12. uzdevums
 * 
 *  Sastādīt programmu, kas sasummē visus tos divzīmju naturālos
 *  skaitļus, kas dalās ar 4. Prasībām atbilstošos skaitļus 
 *  parādīt ekrānā.
 * 
 *    
 */

#include <iostream>
#include <stdlib.h>     
#include <math.h>       
   

using namespace std;

int main(int argc, char **argv)
{
 
 int n=0;
 
 cout<<"2 ciparu skaitļi, kas dalās ar 4:"<<endl;
 for(int z=10; z<100; z++){
	if(z%4==0) {
		cout<<z<< " ";
		n=n+z;
	 } 
 }  
 
 cout<<endl<<"To summa: "<<n;
 
 
  
   	
 return 0;
}



