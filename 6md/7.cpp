/*
 *  7. Uzdevums
 *
 *  Dots naturāls skaitlis n. Sastādīt programmu, 
 * kas izveido masīvu A[n][n] un aizpilda tās 
 * elementus ar vērtības pēc formulas:  sk. uzd. doc
 *  cos(10*i+j)	ja i<j
	A[i][j]= 	1		ja i=j
	sin(i+10*j)	ja i>j
 * 
 */

#include <iostream>
#include <stdlib.h>     
#include <time.h> 
#include <math.h> 
 
using namespace std;

int main(int argc, char **argv)
{
   
 double A[100][100];
 int a;
 
 srand(time(0)); 
 
 
 cout<<"Ievadi 2D masīva NxN elementu skaitu: ";
 cin>>a;
   
 if(a>100) {
	 cout<< "o_0 > LOL"; // kļūdas ziņojums, kas tiek izvadīts, ja gluži par daudz skaitu ievada;
 } else {
  
	 for(int z=0; z<a; z++){
			for(int w=0; w<a; w++){
		      
		      if(z<w) A[z][w]= cos(10*z+w);
		      if(z==w)A[z][w]=1;
		      if(z>w) A[z][w]= sin(z+10*w);
		       
		 
		 }
		 		
	 }
		 
	 
		 
} //end else LOL
  

cout<<endl<<"Izvadām pārbaudei:"<<endl;

	 for(int z=0; z<a; z++){
			for(int w=0; w<a; w++){
				 
				 
					if( A[w][z]>-1) cout<<"        "; //izvadām papildus atstarpi smukumam
					cout<<A[w][z]<<" ";
				 
			}
		 	cout<<endl;	
	 }

 
  
 return 0;
}



