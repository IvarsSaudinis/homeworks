/*
 * 6. uzdevums
 * 
 * Sastādīt programmu, kas izdrukā ekrānā aritmētiskās progresijas 
 * pirmos N locekļus un aprēķina to summu, ja progresijas pirmais
 * loceklis ir –10, bet diference d=2. N ievada lietotājs. 
 *  
 */

#include <iostream>
#include <stdlib.h>     
   

using namespace std;

int main(int argc, char **argv)
{
   
 int n,   skaits=0; 
 
 cout<<"Ievadiet skaitli N: ";
 cin>>n;
 
 cout<<"Aritmētiskās progresijas locekļi: "<<endl;
 
 
 for (int z=-10; z<n; z=z+2) {
    
   cout<<z<<" ";
   skaits=skaits+z;  

  } 
  
   

cout<<endl<<endl<<"Šo skaitļu summa = "<< skaits;

		
	
 	
 return 0;
}



