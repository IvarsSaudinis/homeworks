/*
 *  9. uzdevums
 * 
 * Sastādīt programmu, kas lietotāja ievadīto temperatūru Celsija
 * grādos, pārveido Fārenheita grādos, un iegūto rezultātu parāda 
 * ekrānā. (F0=C0*9/5+32).
 * 
 * 
 */


#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
   
  double c;
 
 
 cout <<"Ievadi grādus pēc celsija:";
 cin >>c;
 cout <<"Parkonvertējot šos grādus fārenheitos, sanāk "<<(c*1.2)+32<<" grādi";  
  
 	
	return 0;
}



