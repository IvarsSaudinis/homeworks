/*
 *  1. uzdevums
 * 
 * Sastādīt programmu, kas modelē monētas mešanu 200 reizes un 
 * saskaita, cik reizes uzkritis ģerbonis un cik reizes uzkritis cipars.
 * 
 */

#include <iostream>
#include <stdlib.h>     
#include <time.h>      

using namespace std;

int main(int argc, char **argv)
{
   
int  g=0, c=0, izvele;

 srand(time(0));   
 
 for (int n=200; n>0; n--) {
    
	izvele = rand() % 2 +1;	
  
	if(izvele==2) g++;
	if(izvele==1) c++;
  } 
  
   

cout<<endl<<"Ģērbonis uzkrita "<<g<<" reizes"<<endl ;
cout<<"Cipars uzkrita "<<c<<" reizes" ; 
		
	
 	
 return 0;
}



