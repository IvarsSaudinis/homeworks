/*
 *  10. uzdevums
 * 
 * Sastādīt programmu, kas aprēķina akvārija tilpumu litros,
 * ja lietotājs ievada akvārija garumu, platumu un augstumu centimetros.
 * 
 */


#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char **argv)
{
   
double g, p, h;
double t;
 
 
 cout <<"Ievadi akvārija garumu: ";
 cin >> g;
 cout <<"Ievadi akvārija platumu: ";
 cin >> p;
 cout <<"Ievadi akvārija augstumu: ";
 cin >> h;
  
 t = (g*p*h)/1000;
 cout << fixed << setprecision(2);
 cout <<"Akvārija tilpums litros: "<<t <<endl;  
  
 	
	return 0;
}



