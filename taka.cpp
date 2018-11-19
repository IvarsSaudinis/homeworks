/*
 * Bezgalīgas kvadrātveida rūtiņu lapas kādas rūtiņas virsotnē atrodas rūķītis. Rūķītis māk pārvietoties tikai pa rūtiņu malām.
 * Vienas rūtiņas malas garums ir viens rūķīša solis. Katrā brīdī rūķīša skats ir pavērsts pret kādu no blakus esošajām rūtiņu virsotnēm.
Bieži rūķītis devās ceļojumā, pa ceļam pierakstot instrukcijas, kā viņš ir gājis, lai šo ceļojumu būtu iespējams atkārtot. Instrukcija var būt:
1) K (nozīmē, ka šajā virsotnē rūķītis pagriezies 90° pa kreisi);
2) L (nozīmē, ka šajā virsotnē rūķītis pagriezies 90° pa labi);
3) S (nozīmē, ka izvēlētajā virzienā rūķītis nogājis soļu skaits soļus);
4) V (apzīmē ceļojuma beigas - vienmēr tikai pēdējā instrukcija).
Uzrakstiet programmu, kas dotam ceļojuma pierakstam nosaka mazāko soļu skaitu, kāds rūķītim nepieciešams,
lai atgrieztos sākumpunktā (tas var būt mazāks par ceļojuma kopgarumu)!

 */
#include <iostream>
#include <string>
#include <stdlib.h>


using namespace std;

int get_steps_count(string str)
{
    string rez = "";
    string::size_type sz;

    // no simbolu virknes nolasām tikai ciparus un tos konvertejam uz skaitli
    for(int a=0; a< str.length(); a++)
        if(isdigit(str[a])) rez += str[a];

    return stoi(rez, &sz);

}
int main() {

    string ievade = "";

    int x = 0;
    int y = 0; // koordinātes, no kurām jāatrod moduļus (attālumus līdz nulei laikam) un jāsasumē, lai iegūtu atpakaļceļu

    int soli = 0;

    int virziens = 180; // sākotnējais ceļš uz leju


     do
    {
        ievade = "";
        getline(cin, ievade);


        if(ievade.find_first_of('S')!=string::npos) {
            soli = get_steps_count(ievade);
            cout << "Programma uzskata, ka rukis veiks [" << soli << "] solus" << endl;

            switch(virziens) {
                /* utt */
                case -180   : y = y - soli;
                    break;
                case -90    : x = x - soli;
                    break;
                case 0      : y = y - soli;
                    break;
                case 90     : x = x - soli;
                    break;
                case 180    : y = y + soli;
                    break;
                case 270    : x = x + soli;
                    break;
                case 360    : y = y + soli;
                    break;
                /* utt */
            }

        }

        if(ievade.find_first_of('K')!=string::npos) {
            cout << "Programma uzskata, ka rukis pagriezisies pa kreisi" << endl;
            virziens = virziens - 90;
        }

        if(ievade.find_first_of('L')!=string::npos) {
            cout << "Programma uzskata, ka rukis pagriezisies pa labi" << endl;
            virziens = virziens + 90;
        }

        cout << "Esosais virziens graados uz koordinatu plaknes: " << virziens << endl;
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;


    } while(ievade.find('V'));


    cout << endl << "Pastaiga beigusies. Atpakal buut javeic " << abs(x)+abs(y) << " solji!!! ";
    return 0;
}

/* Konsoles rezultati šai programmai:
//

S7
S7
Programma uzskata, ka rukis veiks [7] solus
Esosais virziens graados uz koordinatu plaknes: 180
X: 0
Y: 7
L
L
Programma uzskata, ka rukis pagriezisies pa labi
Esosais virziens graados uz koordinatu plaknes: 270
X: 0
Y: 7
S1
S1
Programma uzskata, ka rukis veiks [1] solus
Esosais virziens graados uz koordinatu plaknes: 270
X: 1
Y: 7
K
K
Programma uzskata, ka rukis pagriezisies pa kreisi
Esosais virziens graados uz koordinatu plaknes: 180
X: 1
Y: 7
S4
S4
Programma uzskata, ka rukis veiks [4] solus
Esosais virziens graados uz koordinatu plaknes: 180
X: 1
Y: 11
K
K
Programma uzskata, ka rukis pagriezisies pa kreisi
Esosais virziens graados uz koordinatu plaknes: 90
X: 1
Y: 11
S3
S3
Programma uzskata, ka rukis veiks [3] solus
Esosais virziens graados uz koordinatu plaknes: 90
X: -2
Y: 11
K
K
Programma uzskata, ka rukis pagriezisies pa kreisi
Esosais virziens graados uz koordinatu plaknes: 0
X: -2
Y: 11
S8
S8
Programma uzskata, ka rukis veiks [8] solus
Esosais virziens graados uz koordinatu plaknes: 0
X: -2
Y: 3
V
V
Esosais virziens graados uz koordinatu plaknes: 0
X: -2
Y: 3

Pastaiga beigusies. Atpakal buut javeic 5 solji!!!
Process finished with exit code 0

*/
