/*
 * 2. uzdevums
 *
 * Sastādīt programmu, kas aizpilda un izvada ekrānā masīvu A[N] 
 * (N ievada lietotājs) ar vērtībām sekojošā veidā: 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, …
  
 */


#include <iostream>
 
using namespace std;

int main(int argc, char **argv)
{
   
 int A[100], n;
 
 cout<<"Ievadi masīva elementu skaitu n (A<100): ";
 cin>>n;
 
 if(n<100) {
	
	 for(int z=0; z<n; z++){
		 if(z%2==0) {
			 
			A[z]=1;
		 } else {
			 
			 A[z]=0;
		} 
		   
 
 }  
	 
	 
	 
 } else {
	 
	 cout<<"Nepareiza masīva vērtība";
 }
 

 //izvade
 for(int o=0; o<n; o++) {
	 cout<<A[o]<<" ";
 } 
  
	
 	
 return 0;
}



