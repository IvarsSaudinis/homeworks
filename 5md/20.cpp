/*
 *  20. Uzdevums
 *
 * Sastādīt programmu, kas aizpilda desmit elementu masīvu ar vērtībām 
 * no 1 līdz 10 sajauktā secībā, tā lai neviena to tām neatkārtotos.
 * 
 */

#include <iostream>
#include <stdlib.h>     
#include <time.h>   
 
using namespace std;

int main(int argc, char **argv)
{
   
 int A[10], B[11]={0,1,2,3,4,5,6,7,8,9,10}, o_0;
  
 srand(time(0)); 
  
 for(int z=0; z<10; z++){
	 o_0 = rand() % 10 + 1;
	 // pārbaudām vai varam izmantot tādu skaitli, ko ģenerējam
	 if(B[o_0]==o_0){
		 // ak, tāds vēl sarakstā ir? Tad piešķiram masīvam un izdzēšam no saraksta
		 A[z]=o_0;
		 B[o_0] = 666;
		 	 
	 } else {
		 // Ja ir izmantots, tad, protams, atkārtojam ciklu pa jaunu un neļaujam 
		 // ņemt vērā neveiksmi
		 z--;
	 }
	 
 }
 
 //Izvadam mūzu draņķa ciklu
 cout<<"A: ";
 for(int o=0; o<10; o++){
	 cout<<A[o]<<" ";
 }
  
 return 0;
}



