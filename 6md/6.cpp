/*
 *  6. Uzdevums
 *
 *  Aprēķināt masīva A[n][m] katras kolonas pozitīvo elementu vidējo 
 *  aritmētisko, ja masīvs aizpildīts ar nejaušiem skaitļiem 
 *  intervālā [-5;5], n un m ievada lietotājs.
 * 
 *  P.S. Identisks gandrīz 4. uzdevumam 
 */

#include <iostream>
#include <stdlib.h>     
#include <time.h> 
#include <math.h> 
 
using namespace std;

int main(int argc, char **argv)
{
   
 int A[100][100], a,b, summa=0,el=0;
 double rez;
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
				A[z][w]= rand() % 10 - 5;
				if(A[z][w]>0) {
					summa=summa+A[z][w];
					el++; 
		 		 }
				
			}
				if(el>0) {
					rez= float(summa)/el;
					summa=0;
					el=0;
					cout<<z+1<<". kollonas pozitīvo [x>0] elemetu vid. aritm. ir "<<rez<<endl;
				} else {
					cout<<z+1<<". kollonā nekas pozitīvs nebija"<<endl;
				}
		 		
	 }
		 
	 
		 
} //end else LOL
  

cout<<endl<<"Izvadām pārbaudei:"<<endl;

	 for(int z=0; z<a; z++){
			for(int w=0; w<b; w++){
				 
				 
					if( A[w][z]>-1) cout<<" "; //izvadām papildus atstarpi smukumam
					cout<<A[w][z]<<" ";
				 
			}
		 	cout<<endl;	
	 }

 
  
 return 0;
}



