/*
 *  1. uzdevums
 *
 *  Sastādīt programmu, kas aizpilda un izvada ekrānā masīvu A[20] ar
 *  vērtībām sekojošā veidā: 
 * 10, 1, 
 * 9, 2, 
 
 */


#include <iostream>
 
using namespace std;

int main(int argc, char **argv)
{
   
 int A[20];
 
 for(int z=0; z<11; z++){
		
		A[z*2] = 10-z;    
		A[(z*2)+1] = z+1;   
 
 } 
 //izvade
 for(int o=0; o<20; o++) {
	 cout<<A[o]<<" ";
 } 
  
	
 	
 return 0;
}



