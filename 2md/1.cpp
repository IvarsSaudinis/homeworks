/*
 *  1. uzdevums
 * 
 *	Sastādīt programmu, kura lietotājam pieprasa ievadīt skaitli 
 *  un ekrānā parāda paziņojumu, vai šis skaitlis ir pozitīvs, negatīvs vai nulle.
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
   
int skaitlis;
 
 
 cout <<"Ievadi skaitli: ";
 cin >>skaitlis; 
 
 if(skaitlis>0) 	cout <<"Skatilis ir lielāks par nulli";
 if(skaitlis==0) 	cout <<"Skaitlis ir nulle";
 if(skaitlis<0) 	cout <<"Skatilis ir mazāks par nulli";
  
 	
 return 0;
}



