/*
 * 14. Uzdevums
 *
 *  Sastādīt programmu, kas aizpilda masīvu A[100] ar nejaušiem skaitļiem
 *  intervālā [1;100] un nosaka cik masīva elementu
 *  vērtības atrodas robežās [1;20], cik [21;40], ..., cik [81;100].

 * 
 */


#include <iostream>
#include <stdlib.h>     
#include <time.h>   
 
using namespace std;

int main(int argc, char **argv)
{
   
 int A[100], B[5]={0,0,0,0,0}, n;
  
 
 srand(time(0)); 
 n=100; 
 
 
  
 for(int z=0; z<n; z++){
	  A[z]= rand() % 100+1;
	  if((A[z]>0)&&(A[z]<=20)) B[0]++;
	  if((A[z]>20)&&(A[z]<=40))B[1]++;
	  if((A[z]>40)&&(A[z]<=60))B[2]++;
	  if((A[z]>60)&&(A[z]<=80))B[3]++;
	  if(A[z]>80) B[4]++;
	 
 }
 
 
 for(int o=0; o<5; o++) {
 
	 cout<<"Starp "<<o*20+1<<" un "<<o*20+20<<" bija "<<	B[o] << " elementi"<<endl;
 } 
 
	
 	
 return 0;
}



