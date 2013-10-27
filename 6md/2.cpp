/*
 *  2. Uzdevums
 *
 * Aprēķināt masīva A[n][m], kurš aizpildīts ar nejaušiem skaitļiem 
 * [-5;5] (n un m ievada lietotājs), katras kolonas negatīvo elementu 
 * summas moduli.
 */

#include <iostream>
#include <stdlib.h>     
#include <time.h> 
#include <math.h> 
 
using namespace std;

int main(int argc, char **argv)
{
   
 int A[100][100], a,b, summa=0;
 srand(time(0)); 
 
 
 cout<<"Ievadi 2D masīva rindu skaitu: ";
 cin>>a;
 
 cout<<"Ievadi 2D masīva kollonu skaitu: ";
 cin>>b;
  
 if((a>100)||(b>100)) {
	 cout<< "o_0 > LOL"; // kļūdas ziņojums, kas tiek izvadīts, ja gluži par daudz skaitu ievada;
 } else {
  
	 for(int z=0; z<b; z++){
			for(int w=0; w<a; w++){
				A[z][w]= rand() % 11-6;
				if(A[z][w]<0) summa=summa+A[z][w];
			}
			cout<<z+1<<". kolonas negatīvo elementu summas modulis ir "<<abs(summa)<<endl;
			summa =0;
			
			}
		 
	 
		 
} //end else
 

 
  
 return 0;
}



