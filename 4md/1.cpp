/*
 *  1. uzdevums
 * 
 *  Nodrukāt vesela pozitīva skaitļa visus ciparus apgrieztā 
 *  secībā ar atstarpi 3 pozīcijas. Skaitli ievada lietotājs. 
 *  Paredzēt atkārtotu datu ievadi.
 * 
 * 
 */


#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
   
 int a; 
 
 std::string cipari ;
 int izvele;
  
 do {
    cout << "Ievadi [4 ciparu!] skaitli: ";
    cin >> cipari;
    cout << "Ievadītais skaitlis: " << cipari << "\n";
     
    cout << "Apgrieztais skaitlis:";
    for(a=cipari.length(); a>0; a--){
		cout << cipari[a-1]<< "   ";
	}
     
     cout << "\n"; 
     cout << "Turpināt programmas izpildi? Ja nē, tad raksti 0";
     cout <<"\n";
     cin >> izvele;
    
  } while (izvele != 0);
	
	
	return 0;
}


