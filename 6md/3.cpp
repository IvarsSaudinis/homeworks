/*
 *  3. Uzdevums
 *
 * Dots masīvs A[n][n], kas aizpildīta ar nejaušiem skaitļiem [5;10], 
 * n ievada lietotājs. Aprēķināt to elementu summu, kas atrodas 
 * virs galvenās diagonāles.
 */

#include <iostream>
#include <stdlib.h>     
#include <time.h> 
#include <math.h> 
 
using namespace std;

int main(int argc, char **argv)
{
   
 int A[100][100], a, summa=0;
 srand(time(0)); 
 
 
 cout<<"Ievadi 2D masīva NxN elementu skaitu: ";
 cin>>a;
 
 
  
 if(a>100) {
	 cout<< "o_0 > LOL"; // kļūdas ziņojums, kas tiek izvadīts, ja gluži par daudz skaitu ievada;
 } else {
  
	 for(int z=0; z<a; z++){
			for(int w=0; w<a; w++){
				A[z][w]= rand() % 5 + 6;
				if(w>z) summa=summa+A[z][w];
			}
		 		
	 }
		 
	 
		 
} //end else LOL
 
cout<<"Elementu summa ir "<<summa<<endl;

cout<<endl<<"Izvadām pārbaudei:"<<endl;

	 for(int z=0; z<a; z++){
			for(int w=0; w<a; w++){
				 
				if(w>z) { 
					if(A[z][w]<10) cout<<" "; //izvadām papildus rindiņu smukumam
					cout<<A[z][w]<<" ";
					
				} else {
				 cout<<" # ";	
				}
			}
		 	cout<<endl;	
	 }

 
  
 return 0;
}



