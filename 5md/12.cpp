/*
 * 12. Uzdevums
 *
 * Dots naturālu skaitļu masīvs A[N], kura elementi ir 
 * nejauši skaitļi intervālā [1;100]. Sastādīt programmu, 
 * kas nosaka, cik masīvā ir tādu elementu, kuru vērtības ir 
 * lielākas par masīva pirmā elementa vērtību.

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
  
 for(int z=0; z<n; z++){
	  A[z]= rand() % 100+1;
	  if(A[z]>A[0])p++;
	 
	 
 }
 
 cout<<"Pirmā elementa vērtība ir "<<A[0]<<endl;
 //izvade
 cout<<"A: ";
 for(int o=0; o<n; o++) {
	 cout<<A[o]<<" ";
 } 
 cout<<endl<<endl<<"Lielāki par pirmā masīva elementa vērtību ir  "<<p<<" elementi";
	
 	
 return 0;
}



