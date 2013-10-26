/*
 *  2. uzdevums
 * 
 *	Sastādīt programmu, kas aprēķina skaitļu a, b, c vidējo aritmētisko, ja a, b un c ievada lietotājs.
 * 
 */


#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char **argv)
{
   
 double a,b,c;
 double rez;
 
 
 cout <<"Ievadi skaitli a: ";
 cin >>a; 
 cout <<endl<<"Ievadi skaitli b: ";
 cin >>b;
 cout <<endl<<"Ievadi skaitli c: ";
 cin >>c;
 
 cout <<endl<<"Šo skaitļu vidējais aritmētiskais ir: ";
 rez = float(a+b+c)/3;
 cout << fixed << setprecision(4);
 cout<<rez;
 	
 return 0;
}



