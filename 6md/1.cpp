/*
 *  1. Uzdevums
 *
 * Dots masīvs A[n][n]. Aprēķināt to elementu summu, kas atrodas 
 * intervālā [B;C] un noteikts šo elementu skaitu. B, C (B<C) 
 * un n ievada lietotājs.
 * 
 */

#include <iostream>
#include <stdlib.h>     
#include <time.h>   
 
using namespace std;

int main(int argc, char **argv)
{
   
 int A[100][100], o_0, a,b=-1, sk=0, summa=0;
 srand(time(0)); 
 
 
 cout<<"Ievadi 2D masīva elementu skaitu: ";
 cin>>o_0;
 
 cout<<"Ievadi intervāla sākumu: ";
 cin>>a;
 
 while(b<a){
	cout<<"Ievadi intervāla beigas. Beigām jābūt lielālākam par " << a<<": ";
	cin>>b;	 
 }
 
 
 if(o_0>100) {
	 cout<< "o_0 > LOL"; // kļūdas ziņojums, kas tiek izvadīts, ja gluži par daudz skaitu ievada;
 } else {
  
	 for(int z=0; z<o_0; z++){
			for(int w=0; w<o_0; w++){
				
				A[z][w]= rand() % 100+1;
				if((A[z][w]>=a)&&(A[z][w]<=b)) {
					summa= summa+A[z][w]; //pieskaitām summu
					sk++; // pieskaitām skaitu
				}
			
			
			}
		 
	 }
	 
	 
	 
} //end else
 
 cout<<"Šajā intervālā bija "<<	sk <<" elementi un to summa ir "<< summa;
 
  
 return 0;
}



