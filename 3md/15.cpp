/*
 * 16. uzdevums
 * 
 *  Sastādīt programmu, kas aprēķina un izdrukā ekrānā Tavu naudas
 *  daudzumu bankas kontā katra gada beigās, ja Tu esi ielicis
 *  bankā N latus uz P procentiem gadā un uz G gadiem.
 * 
 *    
 
 */

#include <iostream>
#include <stdlib.h>     
 
   

using namespace std;

int main(int argc, char **argv)
{
 int N,  G,  nnp;
 double pr, P;
 
 pr=0;
 
 cout<<"Ievadi naudu: ";
 cin>>N;
 cout<<"Ievadi procentus: ";
 cin>>P;
 cout<<"Ievadi gadu skaitu: ";
 cin>>G;
 
 pr=P/100;
 cout<<"p: "<<pr<<endl;
 for(int z=1; z<G+1; z++){
	 
	 nnp = N*pr;
	 
	 cout<<z<<". gadā naudai ["<<N<<"] ieguva klāt "<<nnp<<endl;
	 
	 N=N+nnp;
 }
 
  cout<<endl<<"Kopā sanāk: "<<N;
   	
 return 0;
}



