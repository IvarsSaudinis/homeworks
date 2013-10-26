/*
 *  6. uzdevums
 *
 * Sastādīt programmu, kas lietotāja ievadīto summu eiro pārvērš 
 * latos un dolāros pēc šodienas Latvijas bankas noteiktā valūtas kursa. 
 * 
 * 
 */


#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
   
  double eiro;
 
 
 cout <<"Ievadi eiro:";
 cin >>eiro;
 cout <<"\n"<<"Ja konvertētu "<< eiro <<" eiro, tad sanāktu:\n";
 cout <<"Lati:   "<<eiro*0.7101<<" (pec kursa 1:0.7101)"<<endl;
 cout <<"Dolāri: "<<(eiro*0.7101)/0.5183<<" (pec kursa 1:0.5183)"<<endl;
 	
	return 0;
}



