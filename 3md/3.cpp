/*
 * 3. uzdevums
 * 
 * Sastādīt programmu, kas izvada ekrānā n gadījuma skaitļus 
 * intervālā [1;10] un nosaka pāra un nepāra skaitļu skaitu.
 * 
 */

#include <iostream>
#include <stdlib.h>     
#include <time.h>      

using namespace std;

int main(int argc, char **argv)
{
   
int  skaits, izvele, p=0, n=0;

cout<<"Ievadi cikla reižu skaitu: ";
cin>>skaits;

 srand(time(0));   
 
 for (int z=skaits; z>0; z--) {
    
	izvele = rand() % 10 +1;
	 
	
	if(izvele%2==0) {
		
		p++;
		
	} 
	
	if(izvele%2==1){
		
		n++;
	}
	 
  } 
  
   

cout<<endl<<"No "<<skaits<<" gadījumiem "<<p<< " bija pāra skaitļi, bet "<< n<< " nepāra skaitļi";

		
	
 	
 return 0;
}



