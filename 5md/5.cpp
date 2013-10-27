/*
 * 5. uzdevums
 *
 * Sastādīt programmu, kas aizpilda masīvu A[N] ar nejaušiem skaitļiem, 
 * pēc tam šīs vērtības pārraksta masīvā B[N] un, tad aizpilda
 *  masīvu C[2*N] šādā veidā:
			C[1]=A[1];
			C[2]=B[1];
			C[3]=A[2];
			C[4]=B[2];
			...
			C[2*N-1]=A[N];
			C[2*N]=B[N].
			* 
			N ievada lietotājs. 
			 * 
 * 
 */


#include <iostream>
#include <stdlib.h>     
#include <time.h>   
 
using namespace std;

int main(int argc, char **argv)
{
   
 int A[100], B[100], C[200], n;
 srand(time(0)); 
 
 
 cout<<"Ievadi masīva elementu skaitu n (A<100): ";
 cin>>n;
 
 if(n<100) {
 	 for(int z=0; z<n; z++){
	  A[z]= rand() % 20 +1;
	  B[z]= A[z];
	  
	  C[(2*z)+1]=A[z];
	  C[2*z]=B[z]; 
 
	 }
	
 	 
	 
 } else {
	 
	 cout<<"Nepareiza masīva vērtība";
	 
 }
 

 //izvade
 cout<<"A: ";
 for(int o=0; o<n; o++) {
	 cout<<A[o]<<" ";
 } 
 cout<<endl<<"B: ";
 for(int o=0; o<n; o++) {
	 cout<<B[o]<<" ";
 }
 cout<<endl<<"C: ";
  for(int o=0; o<n*2; o++) {
	 cout<<C[o]<<" ";
 } 
	
 	
 return 0;
}



