/*
 *  3. uzdevums
 * 
 * Sastādīt programmu, kas izvada ekrānā funkcijas y=x2+3x-7 vērtību
 * tabulu x vērtībām no –10 līdz 10 ar soli x. X ievada lietotājs. 
 * Paredzēt atkārtotu datu ievadi. 
 * 
 * 
 */


#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{

 int x, solis, yes=1;
 
 
 
 
 while(yes==1) {
 
 	
 cout<<"Ievadiet soli: ";
 cin>>solis;	
 
 x=-10; 
 cout<<" x \t"<<"| y \t"<<endl;
 do {
  cout<<" "<<x<<" \t"<<"| "<<(x*2)+(3*x)-7<<endl;
  x=x+solis; 
 } while (x  < 11);

cout<<endl<<"Vēlaties ievadīt citu soli? Spiediet [1]: ";
cin>>yes;
}	
	
	return 0;
}


