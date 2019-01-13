/* 5. uzd
Izveidot un aizpildīt masīvu ar šādu struktūru:
Vārds – studenta vārds;
Uzvārds – studenta uzvārds;
Programmēšana – vērtējums kursā "Programmēšana";
Ievads_datorikā – vērtējums kursā "Ievads datorikā";
Animācija – vērtējums kursā "Datorgrafika un animācija".
Izvadīt ekrānā studentu iegūto vidējo vērtējumu trijos priekšmetos. Studentu sarakstu izvadīt ekrānā sakārtotu pēc
vidējās atzīmes no augstākās uz zemāko.

*/
#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

struct students {
    char vards[20];
    char uzvards [33];
    int programmesana;
    int datorika;
    int animacija;
    float vid; // ievadam vidējo atzīmi jau te
};

void ievade(students masivs[10], int& n);
void izvade(students masivs[10], int n);

int main() {

    students masivs[10];
    int n =0;
    int q;
    do{
        system("cls");
        cout<<"1. Pievienot jaunu studentu\n";
        cout<<"2. Apskatit studentu sarakstu\n";
        cout<<"3. Partraukt darbu\n";
        cout<<"============================\n";
        cout<<"Izvele: "; cin>>q;
        switch (q){
            case 1: ievade(masivs,n); break;  //datu ievades izsaukums
            case 2: izvade(masivs,n); break;  //datu izvades izsaukums
        }
    }while(q!=3);



    return 0;
}

void izvade(students masivs[10], int n){   //datu izvade

    // sakartot augosa seciba.
    for (int a = 0; a < n-1; ++a) {
        for (int b = 0; b < n- 1 - a; ++b) {
            if(masivs[n].vid<masivs[n+1].vid)
            {
                swap(masivs[n], masivs[n+1]);
            }
        }

    }
    system("cls");
    // izvade
    cout<<"Saraksts\n============================\n";
    for(int i=0; i<n; i++){
        cout<<masivs[i].vards<<"\t"<< masivs[i].uzvards << "\t Vid. atzime: " << masivs[i].vid;
        cout<<endl;
    }
    system("pause");
}


void ievade(students masivs[10], int& n)
{
     system("pause");
     cout<<"Vards: "; cin>>masivs[n].vards;
     cout<<"Uzvards: "; cin>>masivs[n].uzvards;
     cout<<"Vertejums programmesana: "; cin>>masivs[n].programmesana;
     cout<<"Vertejums datorikaa: "; cin>>masivs[n].datorika;
     cout<<"Vertejums animaacijaa: "; cin>>masivs[n].animacija;
     masivs[n].vid = (masivs[n].programmesana + masivs[n].datorika + masivs[n].animacija)/3.0;
     n++;
}
