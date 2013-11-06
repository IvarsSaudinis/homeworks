/*
 *  18. Uzdevums
 *
 * Sastādīt programmu, kas aizpildīs divdimensiju masīvu A[10][10] tā,
 * kā paradīts tabulā.
 */

#include <iostream>
#include <stdlib.h>     
 
 
using namespace std;

int main(int argc, char **argv)
{
   
 int A[10][10], c=1,l=5; 
 
//aizpildām visu ar 0
  for(int z=0; z<10; z++) 
			for(int w=0; w<10; w++) 
				 A[z][w]= 0;
 
 
 //step 1
for(int a=0; a<5;a++)  
	if((a+4)%2==0){	 
			for(int b=0; b<10; b++) A[a][b] = c++;			 
		 } else {			
			for(int b=9; b>=0; b--) A[a][b] = c++;
		}
	 
//step 2
l=5;
for(int a=1; a<9; a++)  {
	 for(int b=4; b<l; b++) { 
		 A[b+1][a] = c++;
		 if(c==63) l++;
	}
	 c<59 ? l++ : l--;
}	
		 
	 
   
cout<<endl<<"Izveidotais masīvs:"<<endl<<endl;

	 for(int z=0; z<10; z++){
			for(int w=0; w<10; w++){
				
				if (A[z][w]<10) cout <<" "; 
				cout << A[z][w] <<" ";
				 
			}
		 	cout<<endl;	
	 }
 
  
 return 0;
}



