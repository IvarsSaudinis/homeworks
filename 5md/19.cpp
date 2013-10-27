/*
 *  19. Uzdevums
 *
 * Dots naturālu skaitļu masīvs A[N], kura elementi ir nejauši skaitļi intervālā [1;10]. 
 * Sastādīt programmu, kas saskaita un izdrukā ekrānā, cik dažādu skaitļu ir
 * masīvā. N ievada lietotājs. Skaitļu skaita noteikšanai iesaku izmantot masīvu B[10].
 * 
 */

#include <iostream>
#include <stdlib.h>     
#include <time.h>   
 
using namespace std;

int main(int argc, char **argv)
{
   
 int A[100], B[11]={0,0,0,0,0,0,0,0,0,0,0}, o_0;
 srand(time(0)); 
 
 
 cout<<"Ievadi masīva elementu skaitu: ";
 cin>>o_0;
 
 if(o_0>100) {
	 cout<< "o_0"; 
 } else {
 
   
 for(int z=0; z<o_0; z++){
	 A[z]= rand() % 10 + 1;
	
	cout<<A[z]<< " ";
	
	switch(A[z]) {
		case 1 :  B[A[z]-1]++;
						  break;
		case 2 :  B[A[z]-1]++;
						  break;
		case 3 :  B[A[z]-1]++;
						  break;
		case 4 :  B[A[z]-1]++;
						  break;
		case 5 :  B[A[z]-1]++;
						  break;
		case 6 :  B[A[z]-1]++;
						  break;
		case 7 :  B[A[z]-1]++;
						  break;
		case 8 :  B[A[z]-1]++;
						  break;
		case 9 :  B[A[z]-1]++;
						  break;
		case 10 : B[A[z]-1]++;
						  break;
 	}
 	 
 }
} //end else
 
 //Rezultāts:
 cout<<endl;
 for(int o=0; o<10; o++){
	 if(B[o]==0) {
		 cout<<"Ciparu "<<o+1<< " nesastapām ne reizi"<<endl; 
	 }else {
	 cout<<"Ciparu "<<o+1<< " sastapām "<<B[o]<<" reizes"<<endl;
	}
 }
  
 return 0;
}



