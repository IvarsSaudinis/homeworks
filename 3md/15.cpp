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
 int N, P, G;
 double p;
 
 cout<<"Ievadi naudu: ";
 cin>>N;
 cout<<"Ievadi Procentus";
 cin>>P;
 cout<<"Ievadi gadu skaitu:";
 cin>>G;
 
 p=p/100;
 for(int z=1; z<G+1; z++){
	 
	 cout<<z<<". gadā naudai ["<<N<<"] ieguva klāt "<<N*p<<endl;
	 N=N+(N*p);
 }
 
  
   	
 return 0;
}



