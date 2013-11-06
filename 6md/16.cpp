/*
 *  16. Uzdevums
 *
 * Sastādīt programmu, kas aizpildīs divdimensiju masīvu A[10][10] tā,
 * kā paradīts tabulā.
 */

#include <iostream>
#include <stdlib.h>     
 
 
using namespace std;

int main(int argc, char **argv)
{
   
 int A[10][10], c=1, v=10, p=0, g=0; 
 
//aizpildām visu ar 0
  for(int z=0; z<v; z++) 
			for(int w=0; w<v; w++) 
				 A[z][w]= 0;
 
//pirmā daļa viegli aizpildīta
for(int z=g; z<v; z++){
			for(int w=p; w<v; w++) 
				 A[z][w]= c++;
		 
	p++;
	v--;
			
}
//reset value
g=0; p=5; v=10;	

//ejam mazos soļos uz otro daļu
for(int z=g; z<v; z++){
			for(int w=p; w<v; w++){
				 A[w][z]= c++;
				 
				 if(c==46) {p++;   } 
			}
 			
  	if(c<46) { p++; }else {p--;}
}
	 
 
 
cout<<endl<<"Sakārtotais masīvs:"<<endl<<endl;

	 for(int z=0; z<10; z++){
			for(int w=0; w<10; w++){
				
				if (A[w][z]<10) cout <<" "; 
				cout << A[w][z] <<" ";
				 
			}
		 	cout<<endl;	
	 }
 
  
 return 0;
}



