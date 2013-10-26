/*
 *  19. uzdevums
 *
 * Sastādīt programmu, kas izdrukā ekrānā true, ja lietotāja ievadītā
 * četrciparu skaitļa pirmo divu ciparu veidotais skaitlis ir vienāds 
 * ar otro divu ciparu veidoto skaitli, pretējā gadījumā izdrukāt ekrānā false.
 * 
 */


#include <iostream>
 
using namespace std;

int main(int argc, char **argv)
{
   
int skaitlis,p, o;
 
 
 cout <<"Ievadi 4 ciparu skaitli: ";
 cin>>skaitlis;
 p = skaitlis/100;
 cout <<"Pirmie divi cipari: \t"<<p<<endl;
 o = skaitlis -(p*100);
 cout <<"Parejie cipari: \t"<<o<<endl;
 
 if(p==o) {
	 cout<<"TRUE";
 }else{
	 cout<<"FALSE";
 }
 			 
  
	
 	
 return 0;
}



