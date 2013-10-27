/*
 *  4. Uzdevums
 *
 *  Aprēķināt masīva A[n][m], kura elementi ir aizpildīti ar nejaušiem 
 *  skaitļiem intervālā [-5;5], n un m ievada lietotājs, katras rindas 
 *  pozitīvo elementu vidējo aritmētisko.
 * 
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
  
	 for(int z=0; z<a; z++){
			for(int w=0; w<b; w++){
				A[z][w]= rand() % 10 - 6;
				if(A[z][w]>0) {
					summa=summa+A[z][w];
					el++; 
					
				 }
				
			}
				if(el>0) {
					rez= float(summa)/el;
					summa=0;
					el=0;
					cout<<z+1<<". rindas pozitīvo elemetu vid. aritm. ir "<<rez<<endl;
				} else {
					cout<<z+1<<". rindā nekas pozitīvs nebija"<<endl;
				}
		 		
	 }
		 
	 
		 
} //end else LOL
  

cout<<endl<<"Izvadām pārbaudei:"<<endl;

	 for(int z=0; z<a; z++){
			for(int w=0; w<b; w++){
				 
				 
					if( A[z][w]>0) cout<<" "; //izvadām papildus rindiņu smukumam
					cout<<A[z][w]<<" ";
				 
			}
		 	cout<<endl;	
	 }

 
  
 return 0;
}



