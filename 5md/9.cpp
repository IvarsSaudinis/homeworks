/*
 *  9
 * Sastādīt programmu, kas aprēķina masīva A[10] ne nuļļu 
 * elementu skaitu, ja masīva A[10] elementi ir nejauši 
 * skaitļi intervālā[-5;5].
 * 
 */


#include <iostream>
#include <stdlib.h>     
#include <time.h>   
 
using namespace std;

int main(int argc, char **argv)
{
   
 int A[10],p=0;
 
 srand(time(0)); 
    
 for(int z=0; z<10; z++){
	  A[z]= rand() % 10-5; ;
	  if(A[z]!=0) p++;	
	 
 }
 
 //izvade
 cout<<"A: ";
 for(int o=0; o<10; o++) {
	 cout<<A[o]<<" ";
 } 
 cout<<endl<<"Nenuļļu elementu skaits ir "<<p;
	
 	
 return 0;
}



