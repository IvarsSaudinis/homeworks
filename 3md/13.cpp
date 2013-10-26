/*
 * 13. uzdevums
 * 
 *  Sastādīt programmu, kas aprēķina summu: 1*2+2*3+3*4+4*5+…+19*20.
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
 
 
 for(int z=1; z<20; z++){
	cout<<z<<"*"<<z+1;
	if(z!=19) {	cout<<"+"; } else { cout<<"="; }
	n=n+(z*(z+1));
 
 }  
 
 cout<<n;
   	
 return 0;
}



