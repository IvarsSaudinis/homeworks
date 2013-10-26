/*
 *  7. uzdevums
 * 
 * Sastādīt programmu, kas lietotāja ievadīto skaitli milimetros pārveido 
 * metros, centimetros un milimetros, un iegūto rezultātu parāda ekrānā, 
 * piemēram, 3525mm=3m 52 cm 5 mm.
 * 
 */


#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char **argv)
{
   
int milimetri, metri;
 
 cout <<"Ievadi milimetru skaitu: ";
 cin>>milimetri;
 
 cout<<milimetri<<" mm = ";
 metri = milimetri / 1000;
 
 cout<<metri<< " m ";
 cout<<(milimetri -(metri*1000))/10 <<" cm ";
 cout<<milimetri%10 <<" mm ";
  
 	
 return 0;
}



