/*
 *  6. uzdevums
 * 
 *	Lai zelta zivtiņas akvārijā justos laimīgas, uz katru zelta 
 * zivtiņu nepieciešami 3 litri ūdens. Zināms akvārija tilpums
 *  un zivtiņu skaits tajā. Noskaidrot vai visas zivtiņas akvārijā 
 * ir laimīgas vai nē. Ja zivtiņas nav laimīgas, tad paziņot, cik
 *  akvārijā "nelaimīgo" zivtiņu. Akvārija tilpumu un zivtiņu skaitu 
 * norāda lietotājs. 
 * 
 */


#include <iostream>
 

using namespace std;

int main(int argc, char **argv)
{
   

int  litri, piranjas, sad_piranjas;
 
 
 cout<<"Ievadi litru skaitu akvārijā: ";
 cin>>litri;
 
 cout<<"Ievadi zivtiņu skaitu akvārijā: ";
 cin>>piranjas;
 
 if((piranjas*3)<=litri){
	 cout << "Visas zivtiņas ir laimīgas!";
 
 }


 if((piranjas*3)>litri){
 	 
 	  sad_piranjas = 0;
 	  while((piranjas*3)>=litri)
			{
				sad_piranjas++;
				piranjas=piranjas-3;
				
			 
			}
 	 
 	 
 	 if(sad_piranjas==1) { 
		cout << sad_piranjas<< " zivtiņa ir nelaimīga :(";
 	 } else {
		 cout << sad_piranjas<< " zivtiņas ir nelaimīgas :(";
		 
	 }
 } 
 
  
 
 	
 return 0;
}



