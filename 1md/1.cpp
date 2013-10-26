/*
 *  1. uzdevums
 * 
 *	Sastādīt programmu, kas lietotāja ievadīto summu latos pārvērš eiro 
 *  un dolāros pēc šodienas Latvijas bankas noteiktā valūtas kursa.
 * 
 * 
 */


#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
   
 int lati;
 
 
 cout <<"Ievadi latus:";
 cin >>lati;
 cout <<"\n"<<"Ja konvertētu latus, tad sanāktu:\n";
 cout <<"Dolāri: "<<lati/0.50030<<"\n";
 cout <<"Eiro:   "<<lati/0.70280;
 	
	return 0;
}



