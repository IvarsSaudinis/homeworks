/*
 *  5. uzdevums
 * 
 *	Trīsciparu skaitli sauksim par augošu, ja tā pirmais cipars ir
 *  mazāks par otro un otrais par trešo, par dilstošu, ja pirmais
 *  cipars ir lielāks par otro un otrais par trešo, bet par monotonu,
 *  ja visi cipari ir vienādi. Sastādīt programmu, kas nosaka, vai lietotāja
 *  ievadītais trīsciparu skaitlis ir augošs, dilstošs vai monotons.
 * 
 */


#include <iostream>
 

using namespace std;

int main(int argc, char **argv)
{
   

int  skaitlis, c1,c2,c3;
 
 
 cout<<"Ievadi 3 ciparu skaitli: ";
 cin>>skaitlis;
 
 
 c1		= (skaitlis % 1000) / 100;
 c2 	= (skaitlis % 100)   / 10;     
 c3		= skaitlis % 10;	  
 
  if((c1>c2)&&(c2>c3)) cout<<"Skaitlis ir dilstošs";
  if((c1<c2)&&(c2<c3)) cout<<"Skaitlis ir augošs";
  if((c1==c2)&&(c2==c3)) cout<<"Skaitlis ir monotons";
  
 

 
 	
 return 0;
}



