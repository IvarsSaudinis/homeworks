/*
 *  5. Uzdevums
 *
 *  Aprēķināt masīvā A[n][m] (n un m ievada lietotājs), kurš aizpildīts 
 *  ar nejaušiem skaitļiem intervālā [-2;2] esošo nuļļu skaitu.
 * 
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
				A[z][w]= rand() % 5 -2;
				if(A[z][w]==0) summa++; 
				
			} 
		 		
	 }
		 
	 
		 
} //end else LOL
  
cout<<"šaja masīva ir "<<summa<<" nulles"<<endl;

cout<<endl<<"Izvadām šo masīvu pārbaudei:"<<endl;

	 for(int z=0; z<a; z++){
			for(int w=0; w<b; w++){
				 
				 
					if( A[z][w]>-1) cout<<" "; //izvadām papildus rindiņu smukumam
					cout<<A[z][w]<<" ";
				 
			}
		 	cout<<endl;	
	 }

 
  
 return 0;
}



