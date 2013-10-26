/*
 * 8. uzdevums
 * 
 * Biļetes numurs sastāv no 5 cipariem. Uzskatīsim biļeti par laimīgo, 
 * ja pirmo divu ciparu veidotais skaitlis ir vienāds ar pēdējo divu 
 * ciparu veidoto skaitli. Sastādīt programmu, kas atrod visus laimīgo 
 * biļešu numurus, ja zināms, ka mazākais biļetes numurs ir 
 * skaitlis 10000, bet lielākais 99999.
 *    
 */

#include <iostream>
#include <stdlib.h>     
   

using namespace std;

int main(int argc, char **argv)
{
 
 int pirmais, pedejais;

 cout<<"Laimīgie skaitļi: ";   
 for (int z=10000; z<100000; z++) {
    pirmais = z/1000;
    pedejais =z%100;
    if(pirmais==pedejais) cout<<z<<",";
 } 
   	
 return 0;
}



