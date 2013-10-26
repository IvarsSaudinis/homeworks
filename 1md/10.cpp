/*
 *  10. uzdevums
 * 
 * Sastādīt programmu, kas lietotājam pieprasa ievadīt divus skaitļus,
 *  taisnstūra garumu un platumu, un aprēķina taisnstūra laukumu un
 *  perimetru.
 * 
 */


#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
   
int g, p;
 
 
 cout <<"Ievadi taisnstūra garumu:";
 cin >> g;
 cout <<"Ievadi taisnstūra platumu:";
 cin >> p;
 cout <<"Taisnstura laukums:"<<g*p<<endl;  
 cout <<"Taisnstura perimetrs:"<<(g+p)*2<<endl;   
 	
	return 0;
}



