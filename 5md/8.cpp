/*
 *  8. uzdevums
 *
 * Dots masīvs A[20], kurš aizpildīts ar nejaušiem skaitļiem. 
 * Sastādīt programmu, kas aprēķina to masīva elementu summu,
 * kuru kārtas indekss ir nepāra skaitlis.
 * 
 */


#include <iostream>
#include <stdlib.h>     
#include <time.h>   
 
using namespace std;

int main(int argc, char **argv)
{
   
 int A[20],p=0;
 
 srand(time(0)); 
    
 for(int z=0; z<20; z++){
	  A[z]= rand() % 100+1; ;
	  if(z%2==1) p=p+A[z];	
	 
 }
	  

 //izvade
 cout<<"A: ";
 for(int o=0; o<20; o++) {
	 cout<<A[o]<<" ";
 } 
 cout<<endl<<"Nepāra kārtas indeksa locekļu summa ir "<<p;
	
 	
 return 0;
}



