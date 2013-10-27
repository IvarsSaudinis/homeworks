/*
 * 10. Uzdevums
 *
 * Aprēķināt masīva A[N] pozitīvo elementu vidējo aritmētisko.
 *  N ievada lietotājs, masīvus aizpildīt ar nejaušiem
 *  skaitļiem [-5;5].
 * 
 */


#include <iostream>
#include <stdlib.h>     
#include <time.h>   
 
using namespace std;

int main(int argc, char **argv)
{
   
 int A[100],summa=0,p=0, n;
 double rez;
 
 srand(time(0)); 
 cout<<"Ievadiet elementu skaitu matricā A: ";
 cin>>n;  
  
 for(int z=0; z<n; z++){
	  A[z]= rand() % 10-5; ;
	  if(A[z]>0) {
		  p++;
		  summa= summa+A[z];
	  }	
	 
 }
 
 rez = float(summa)/p;
 //izvade
 cout<<"A: ";
 for(int o=0; o<n; o++) {
	 cout<<A[o]<<" ";
 } 
 cout<<endl<<"Pozitīvo elementu vidējais aritmētiskais ir "<<rez;
	
 	
 return 0;
}



