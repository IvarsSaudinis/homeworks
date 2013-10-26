/*
 *  16. uzdevums
 * 
 * Sastādīt programmu, kas aprēķina lietotāja ievadītā trīsciparu skaitļa summu.
 * 
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
   
int skaitlis;
int vieni, desmiti, simti ; 
 
 cout <<"Ievadi 3 ciparu skaitli: ";
 cin>>skaitlis;
 
 		 
 simti		= (skaitlis % 1000) / 100;
 desmiti 	= (skaitlis % 100)   / 10;       
 vieni		= skaitlis % 10;				 
 
  
  cout<<"Šo skaitļu summa = "<<simti+desmiti+vieni;
		
		
	
 	
 return 0;
}



