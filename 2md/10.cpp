/*
 *  10. uzdevums
 * 
 * Četrciparu skaitli sauksim par augošu, ja tā pirmais cipars ir mazāks
 *  par otro, otrais par trešo un trešais par ceturto, par dilstošu, ja
 *  pirmais cipars ir lielāks par otro, otrais par trešo, trešais par 
 * ceturto, bet par monotonu, ja visi cipari ir vienādi. Sastādīt programmu,
 *  kas nosaka, vai lietotāja ievadītais četrciparu skaitlis ir augošs, 
 * dilstošs vai monotons.
 */


#include <iostream>
 

using namespace std;

int main(int argc, char **argv)
{
   

int  skaitlis, c1,c2,c3,c4;
 
 
 cout<<"Ievadi 4 ciparu skaitli: ";
 cin>>skaitlis;
 
 c1		=  skaitlis / 1000;
 c2		= (skaitlis % 1000) / 100;
 c3 	= (skaitlis % 100)   / 10;     
 c4		= skaitlis % 10;	  
 
  if((c1>c2)&&(c2>c3)&&(c3>c4)) cout<<"Skaitlis ir dilstošs";
  if((c1<c2)&&(c2<c3)&&(c3<c4)) cout<<"Skaitlis ir augošs";
  if((c1==c2)&&(c2==c3)&&(c3==c4)) cout<<"Skaitlis ir monotons";
  
 

 
 	
 return 0;
}



