/*
 * 5. uzdevums
 * 
 * Sastādīt programmu, kas izdrukā ekrānā visus pāra skaitļus, kuru 
 * vērtības atrodas intervālā [a,b] (a un b vērtības ir veseli skaitļi,
 * kurus ievada lietotājs).
 *  
 */

#include <iostream>
#include <stdlib.h>     
   

using namespace std;

int main(int argc, char **argv)
{
   
 int a, b, skaits=0; 
 
 cout<<"Ievadiet intervāla sākumu: ";
 cin>>a;
 
 cout<<"Ievadiet intevāla beigas: ";
 cin>>b;
 
   
 cout<<"Šā intervāla visi pāra skaitļi:"<<endl;
 
 for (int z=b; z>a; z--) {
    
    if(z%2==0){
		cout<<z<<" ";	
		skaits++;
	}

  } 
  
   

cout<<endl<<endl<<"Kopā pāra skaitļi bija "<< skaits;

		
	
 	
 return 0;
}



