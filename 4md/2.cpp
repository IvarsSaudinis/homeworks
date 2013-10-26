/*
 *  2. uzdevums
 * 
 *	Kārlim ir X (X>2) konfektes, pirmajā dienā viņš apēda 3, 
 * 	bet katrā nākamajā dienā par vienu konfekti vairāk kā iepriekšējā 
 *  dienā. Sastādīt programmu, kas nosaka pēc cik dienām Kārlis būs apēdis
 *  visas konfektes. Izvadīt ekrānā informāciju par katru dienu, 
 *  cik konfektes Kārlim atliek. X ievada lietotājs.
 * 
 * 
 */


#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
   
 int koncas, diena, atlikums;
 
 cout << "Ievadi Kārļa konfekšu skaitu: "<<"\n";
 cin >> koncas;
 
 if(koncas<3) {
	 cout << "Mazāk par trīs? Error: končas par maz :(";
 }
 diena = 0; //pirmajā dienā apēda tikai 3
 
 atlikums = koncas; 
 do {
   /* pirmā diena 3 koncas*/
   /* otrā diena 3 koncas +1 */
   
   atlikums = atlikums - (3 + diena);
   //apskatāmies, kas mums darās uz nākošo dienu
   if(atlikums>(3+diena)) {
	   //ir ko ēst nākošajā dienā
	    cout << diena+1 <<". diena - apēstas "<<(3+diena)<<" končas. Atlikušas: "<< atlikums<<"\n";
   } else {
	   // nepietiek īsti nākošajai dienai.
	   cout <<diena+1<<". diena - apēstas visas atlikušās končas "<<"["<< atlikums << "]"  <<"\n";
	   
   }
     
   diena = diena+1;
   
  } while (atlikums  > 0);
	
	
	return 0;
}


