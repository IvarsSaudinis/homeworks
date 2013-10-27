/*
 * 11. Uzdevums
 *
 * Dots naturālu skaitļu masīvs A[N], kura elementi 
 * ir nejauši skaitļi intervālā [1;100]. Sastādīt programmu, 
 * kas nosaka, cik masīvā ir tādu elementu, kuru vērtības ir mazākas 
 * par masīva pēdējā elementa vērtību.

 * 
 */


#include <iostream>
#include <stdlib.h>     
#include <time.h>   
 
using namespace std;

int main(int argc, char **argv)
{
   
 int A[100], p=0, n;
 
 
 srand(time(0)); 
 cout<<"Ievadiet elementu skaitu matricā A: ";
 cin>>n;  
  
 for(int z=n; z>-1; z--){
	  A[z]= rand() % 100+1;
	  if(A[z]<A[n-1]) {
		  p++;
		   
	  }	
	 
 }
 
 cout<<"Pēdējā elementa vērtība ir "<<A[n-1]<<endl;
 //izvade
 cout<<"A: ";
 for(int o=0; o<n; o++) {
	 cout<<A[o]<<" ";
 } 
 cout<<endl<<"Mazāki par pēdējo masīva elementa vērtību ir  "<<p<<" elementi";
	
 	
 return 0;
}



