/*
 * 10. uzdevums
 * 
 * Sastādīt programmu, kas pārbauda, vai lietotājs zina reizināšanas tabulu.
 *  Programma izvada ekrānā jautājumu "Cik ir n*m?", kur n un m nejauši
 *  viencipara skaitļi, un novērtē lietotāja ievadītās atbildes pareizību.
 *  Reizināšanas prasmi pārbaudīt ar 10 piemēriem. Beigās izvadīt pareizo 
 * un nepareizo atbilžu skaitu. 
 * 
 *    
 */

#include <iostream>
#include <stdlib.h>     
#include <time.h>       
   

using namespace std;

int main(int argc, char **argv)
{
 
 int a, b, p=0, n=0, rez;  
 
 srand(time(0)); 
  
 for(int z=0; z<10; z++){
	a = rand() % 10 +1;
	b = rand() % 10 +1;
	
	cout<<"Cik ir "<<a<<"*"<<b<<"? A: ";
	cin>>rez;
	if(rez==(a*b)) {
		p++;
	}else {
		n++;
	}
 	 
 }  
 
 cout<<"Pareizi atbildēji "<< p << " reizes, bet nepareizi "<< n << " reizes"; 
  
 
 
   	
 return 0;
}



