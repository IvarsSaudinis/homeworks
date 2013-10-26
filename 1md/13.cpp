/*
 *  13. uzdevums
 * 
 * Sastādīt programmu, kas izdrukā ekrānā true, ja 
 * lietotāja ievadītā četrciparu skaitļa pirmo divu ciparu 
 * summa ir vienāda ar otro divu ciparu summa, pretējā gadījumā 
 * izdrukāt ekrānā false.
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
 
 
	if((tukstosi+simti)==(desmiti+vieni)){
		cout << "TRUE";
	} else
	{
		cout <<"FALSE";
	}
		
		
	
 	
 return 0;
}



