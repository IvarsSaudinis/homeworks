/*
 *  18. uzdevums
 *
 * Sastādīt programmu, kas aprēķina lietotāja ievadītā četrciparu skaitļa ciparu summu.
 * 
 */


#include <iostream>
 
using namespace std;

int main(int argc, char **argv)
{
   
int skaitlis;
int vieni, desmiti, simti, tukstosi; 
 
 cout <<"Ievadi 4 ciparu skaitli: ";
 cin>>skaitlis;
 
 tukstosi	= skaitlis / 1000; 				 
 simti		= (skaitlis % 1000) / 100;
 desmiti 	= (skaitlis % 100)   / 10;       
 vieni		= skaitlis % 10;				 
 
 
 cout <<"Šo skaitļu summa = "<<tukstosi+simti+desmiti+vieni;		
		
	
 	
 return 0;
}



