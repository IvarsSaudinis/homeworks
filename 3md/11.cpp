/*
 * 11. uzdevums
 * 
 * Sastādīt programmu, kas nosaka vai lietotāja ievadīto naturālo 
 * skaitli N var attēlot kā divu naturālo skaitļu kvadrātu 
 * summu? Ja var, tad kā? (Piemēram, 5=22+12.) 
 * 
 *    
 */

#include <iostream>
#include <stdlib.h>     
#include <math.h>       
   

using namespace std;

int main(int argc, char **argv)
{
 
 int n, ir=0;
 
 cout<<"Ievadi naturālu skaitli: ";
 cin>>n;
 //50
 
  
 for(int z=n; z>0; z--){
	
	for(int y=z; y<n; y++){
		if((z*z)+(y*y)==n) {
			cout<<n<<" = "<<z<<"^2 + "<<y<<"^2 "<<endl;
			ir++; 
 		} 
		
	}
  	 
 }  
 
 if(ir==0) cout<<"Šādam skaitlim kombinācija neatradās :(";
  
   	
 return 0;
}



