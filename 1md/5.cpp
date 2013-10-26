/*
 *  5. uzdevums
 * 
 *	Sastādīt programmu, kas lietotāja ievadīto skaitli metros pārveido
 *  decimetros un centimetros, un iegūto rezultātu parāda ekrānā, 
 *  piemēram, 3,5m=35dm=350cm.
 * 
 */


#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char **argv)
{
   
double metri;
 
 cout <<"Ievadi metru skaitu: ";
 cin>>metri;
 
 cout<<metri<<"m = "<<metri*10<<"dm = "<<metri*100<<"cm";
 
 
 
		
	
 	
 return 0;
}



