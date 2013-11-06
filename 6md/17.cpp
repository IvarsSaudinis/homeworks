/*
 *  17. Uzdevums
 *
 * Sastādīt programmu, kas aizpildīs divdimensiju masīvu A[10][10] tā, kā
 *  paradīts tabulā.
 */

#include <iostream>
#include <stdlib.h>     
 
 
using namespace std;

int main(int argc, char **argv)
{
   
 int A[10][10];
 
//aizpildām visu ar [step] 0
  for(int z=0; z<10; z++) 
			for(int w=0; w<10; w++) 
				 A[z][w]= 0;

  
 
int c=1,l=0;

//step 1
for(int a=0; a<8;a++) {
	
	for(int b=0; b<=l; b++){
		A[b][l-b] = c++;
	}
l++;

}
 
 //step 2 
l=2;
int f=2;

 for(int a=0; a<8; a++) {
	
	for(int b=9; b>=l; b--){
		A[b][f] = c++;
		f++; 
	}
	
l++;
f=l;
}

//izvade 
cout<<endl<<"Sakārtotais masīvs:"<<endl<<endl;

	 for(int z=0; z<10; z++){
			for(int w=0; w<10; w++){
				
				if (A[z][w]<10) cout <<" "; 
				//cout <<"A("<<w<<","<<z<<")=" << A[w][z] <<" ";
				 cout << A[z][w] <<" "; 
			}
		 	cout<<endl;	
	 }
 
  
 return 0;
}



