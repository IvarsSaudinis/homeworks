/*
 * 6. uzdevums
		Sastādīt programmu, kas aizpilda masīvus A[N] un B[N] ar nejaušiem skaitļiem, bet masīvu C[2*N] aizpilda šādi: 
		C[1]=A[1];
		C[2]=B[N];
		C[3]=A[2];
		C[4]=B[N-1];
		...
		C[2*N-1]=A[N];
		C[2*N]=B[1].
		
		N ievada lietotājs.

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
	  B[z]= rand() % 20 +1;
	  
	  // phh, vispirms tomēr jāaizpilda viss masīvs
	 // C[z*2]=A[z]; 
	 // C[(z*2)+1]=B[n-z];
  
	 }
	 
 	 for(int t=0; t<n; t++){
	 	  
	  C[t*2]=A[t]; 
	  C[(t*2)+1]=B[n-t-1];
	 // cout<<"B"<<n-t-1<<": "<<B[n-t-1]<<endl;
 
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



