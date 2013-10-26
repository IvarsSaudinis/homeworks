/*
 * 4. uzdevums
 * 
 * Sastādīt programmu, kas izdrukā ekrānā visus
 *  tos trīsciparu skaitļus, kas dalās ar 7 bez
 *  atlikuma un nosaka to skaitu.
 * 
 */

#include <iostream>
#include <stdlib.h>     
   

using namespace std;

int main(int argc, char **argv)
{
   
int  skaits=0;
 
   
 
 for (int z=999; z>0; z--) {
    
    if(z%7==0){
		cout<<z<<" ";	
		skaits++;
	}

  } 
  
   

cout<<endl<<endl<<"Kopā tādi skaitļi, kas dalās ar 7 bez atlikuma bija "<< skaits;

		
	
 	
 return 0;
}



