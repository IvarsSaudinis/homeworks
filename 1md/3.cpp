/*
 *  3. uzdevums
 * 
 * Sastādīt programmu, kas izdrukā ekrānā true, ja lietotāja ievadītais 
 * četrciparu skaitlis ir palindroms, bet false, ja tas tā nav.
 * 
 */


#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char **argv)
{
   
int skaitlis;
int vieni, desmiti, simti, tukstosi; 
 
 cout <<"Ievadi 4 ciparu skaitli: ";
 cin>>skaitlis;
 
 tukstosi	= skaitlis / 1000; 				// !
 simti		= (skaitlis % 1000) / 100;
 desmiti 	= (skaitlis % 100)   / 10;      // !
 vieni		= skaitlis % 10;				// !
 
 
	if((tukstosi==vieni)&&(simti == desmiti)){
		cout << "TRUE";
	} else
	{
		cout <<"FALSE";
	}
		
		
	
 	
 return 0;
}



