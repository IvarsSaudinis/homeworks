/*
 * tomati.cpp
 * 
 * 
 * Erna nodarbojas ar tomātu audzēšanu un ir salikusi uz palodzes rindā n jaunās ražas tomātus. 
 * Viens no tomātiem ir sarkans, bet pārējie - zaļi. Ir novērots, ka katrs zaļais tomāts, kas stāvējis 
 * blakus sarkanajam, nākošajā dienā kļūst sarkans. Citi tomāti savu krāsu nemaina. Piemēram, ja pavisam 
 * ir deviņi tomāti un ceturtais no kreisās puses ir sarkans, tad pēc divām dienām būs pieci sarkani tomāti. 
 *
 * Sastādīt programmu, kas dotam tomātu skaitam, sarkanā tomāta novietojumam un
 * dienu skaitam nosaka, cik sarkano tomātu būs pēc norādīto dienu skaita! Tomātus 
 * nogatavošanās laikā pārkārtot nedrīkst.  
 * 
 * Lietotājs ievada trīs naturālus skaitļus:
 * N – apzīmēt kopējais tomātu skaits, 
 * S – apzīmē sarkanā tomāta atrašanās vietu - kurš tas ir pēc kārtas, skaitot no kreisās puses, 
 * D – apzīmē dienu skaitu, pēc kāda nepieciešams uzzināt sarkano tomātu skaitu. 
 * Zināms, ka N≤109,S≤N,D≤109.   
 */


#include <iostream>
#include <stdlib.h>
#include <string>
     
using namespace std;

int main()
{

	int D; // apzīmē dienu skaitu, pēc kā nepieciešams uzzinātu sarkano tomātu skaitu
	int N; // kopējais tomātu skaits
	int S; // sarkanā tomāta atrašanās vieta (skaitot no kreisās puses)
	int sarkanie=0;
	
	// pamēģināsim strādāt ar teksta virkni, kur burts Z apzīmēs zaļu tomātu, bet burts S apzīmēs sarkanu tomātiņu
	// darbības ar simbolu virknēm - http://www.cplusplus.com/reference/string/string/string/
	string rinda;
	string sarkans	="S";
	string zals		="Z";
	
	// Standarta ievade nepieciešamajiem datiem	
	cout<<"Ievadiet kopējo tomātu skaitu: "; cin>>N;
	cout<<endl<<"Ievadiet sarkanā tomāta atrašanās vietu:"; cin>>S;
	
	// pārbaude vai tomāta atrašanās vieta ir korekta; Ja kopējais tomātu skaits ir mazaks nekā tā atrašanās vieta
	if(N<S) {
		cout<<"Nekorekta skaitļu ievade!"<<endl;
		return 0;
	}
	
	cout<<endl<<"Cik dienas ilgi tiks nogatavināti tomāti? Ievadiet dienu skaitu:"; cin>>D;
	
	
	// izveidojam šādu virkni ar Z un S, kur S būs sarkanā tomāta sākotnējā pozīcija.
	for(int a=1; a<=N; a++)
	{
		// Ja ir sarkanā tomāta pozīcija, tad simbolu virknei pievieno S, citos gadījumos Z
		if(a==S) { rinda.append(sarkans); } else { rinda.append(zals);}
		
	}
	// izvadam visu simbolu virki ieskatam
	cout<<endl<<"Sākotnējā rinda   "<<"\t"<<rinda<<endl;
	 
	// Sākam skaitīt dienas un nogatavināt tomātus
	// Cikls dienu uzskaitei.
	for(int d=1; d<=D; d++) 
	{
		/* izmantojam darbības ar simboliem.
		 * 
		 * Atrodam pirmo S tomātu un vērtību pirms tam arī uztaisam S;
		 * Atrodam pēdējo S tomātu un vērtību pēc tā uzstaisām par S;
		 * Katru reizi pārbaudām vai neesam izkāpuši ārpus rindas robežām;
		 */
		 
		 // http://www.cplusplus.com/reference/string/string/find_first_of/
		 // cout<<endl<<rinda.find_first_of("S")+1; // tiek izvadīta S pirmā atrašanās vieta
		 // Pārbaudām vai pirmais atrastais S nav pie pašas kreisās malas
		 if(rinda.find_first_of("S")>0)
		 {
			 // pirmais atrastais S un vienu simbolu pirms tā Z nomainām uz S
			rinda[rinda.find_first_of("S")-1] = 'S'; 
		 }
		 
		 // http://www.cplusplus.com/reference/string/string/find_last_of/
		 // cout<<endl<<rinda.find_last_of("S")+1; // tiek izvadīta S pēdējā atrašanās vieta
		 //Pārbaudām vai atrastais pēdējais S nav tik tiešām pēdējais. Ja ir, tad tur jau vairs nav kam nogatavoties.
		 if(rinda.find_last_of("S") < rinda.length())
		 {
			 // pēdējais atrastais S un vienu simbolu pēc tā, Z nomainām ar S
			 rinda[rinda.find_last_of("S")+1] = 'S'; 
		 }
		 
		 // izvade pārbaudei kā darbojas, var aizkomentēt
		 cout<<"Pēc dienas nr. "<<d<<": "<<"\t"<<rinda<<endl;
		 
		 
	}
	
	// kopēja sarkano tomātu saskaitīšana
	for(unsigned t=0; t<=rinda.length(); t++)
	{
		if(rinda[t]=='S') sarkanie = sarkanie + 1;
	}
	
	cout<<endl<<"Kopējais sarkano tomātu skaits pēc "<< D <<" dienām ir "<< sarkanie << "!" << endl;
 	
	return 0;
}

