/*
 *  9. Uzdevums
 *
 * Aprēķināt masīva A[n][m] katras rindas negatīvo elementu summu. 
 * Masīvs aizpildīts ar nejaušiem skaitļiem intervālā [-5;5], 
 * n un m ievada lietotājs.
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
  
	 for(int z=0; z<a; z++){
			for(int w=0; w<b; w++){
				A[z][w]= rand() % 11-6;
				if(A[z][w]<0) summa=summa+A[z][w];
			}
			cout<<z+1<<". rindas negatīvo elementu summa ir "<< summa <<endl;
			summa =0;
			
			}
		 
	 
		 
} //end else
 
cout<<endl<<"Izvadām pārbaudei:"<<endl;

	 for(int z=0; z<a; z++){
			for(int w=0; w<b; w++){
				 
				 
					if(A[z][w]>0) cout<<" "; //izvadām papildus rindiņu smukumam
					cout<<A[z][w]<<" ";
				 
			}
		 	cout<<endl;	
	 }
 
  
 return 0;
}



