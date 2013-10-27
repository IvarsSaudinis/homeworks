/*
 * 3. uzdevums
 *
 * Sastādīt programmu, kas aizpilda un izvada ekrānā masīvu A[N]
 * (N ievada lietotājs) ar vērtībām sekojošā veidā: 2, 3, 4, 9, 8, 27, 16, 81, 32, …
 */


#include <iostream>
 
using namespace std;

int main(int argc, char **argv)
{
   
 int A[200], n, p2,p3;
 
 cout<<"Ievadi masīva elementu skaitu n (A<100): ";
 cin>>n;
 
 if(n<100) {
	 p2=2;
	 p3=3;
	 for(int z=0; z<n; z++){
		
		 
		 A[z*2]=p2;
		 p2=p2*2;
		  
		 A[(z*2)+1] = p3;
		 p3=p3*3;
		 
		
		   
 
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



