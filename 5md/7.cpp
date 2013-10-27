/*
 *  7. uzdevums
 *
 * 	Dots masīvs A[20], kurš aizpildīts ar nejaušiem 
 *  skaitļiem intervālā [-5;3]. Sastādīt programmu,
 *  kas aprēķina masīva pozitīvo elementu summu.
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
	  A[z]= rand() % 9-5; ;
	  if(A[z]>0) p++;	
	 
 }
	  

 //izvade
 cout<<"A: ";
 for(int o=0; o<20; o++) {
	 cout<<A[o]<<" ";
 } 
 cout<<endl<<"Šajā masīva ir "<<p<<" pozitīvi elementi";
	
 	
 return 0;
}



