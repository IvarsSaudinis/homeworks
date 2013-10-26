/*
 *  2. uzdevums
 * 
 * Sastādīt programmu, kas aprēķina 10 gadījuma skaitļu vidējo aritmētisko.
 * 
 */

#include <iostream>
#include <stdlib.h>     
#include <time.h>      

using namespace std;

int main(int argc, char **argv)
{
   
int summa=0,  izvele;

 srand(time(0));   
 cout<<"Gadījuma skaitļi: ";
 for (int n=10; n>0; n--) {
    
	izvele = rand() % 100 +1;
	cout<<izvele<<"  ";	
    summa = summa+ izvele;
  } 
  
   

cout<<endl<<"Šo 10 gadījuma skaitļu vidējais aritmētiskais ir "<<summa/10;
		
	
 	
 return 0;
}



