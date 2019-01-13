/* Izveidot un aizpild?t mas?vu ar š?du strukt?ru:
 * V?rds – grupas biedra v?rds;
 * Uzv?rds – grupas biedra uzv?rds;
 * Dz_Gads – grupas biedra dzimšanas gads.
 * Izvad?t ekr?n? sak?rtotu grupas biedru sarakstu no jaun?k? uz vec?ko.
 */
#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

struct Biedri {
    char vards[20];
    char uzvards [33];
    int gads;
};

void ievade(Biedri masivs[10], int& n);
void izvade(Biedri masivs[10], int n);

int main() {

    Biedri masivs[10];
    int n =0;
    int q;
    do{
        system("cls");
        cout<<"1. Pievienot jaunu biedru\n";
        cout<<"2. Apskatit biedru sarakstu\n";
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

void izvade(Biedri masivs[10], int n){   //datu izvade

    // sakartot augosa seciba.
    for (int a = 0; a < n-1; ++a) {
        for (int b = 0; b < n- 1 - a; ++b) {
            if(masivs[b].gads<masivs[b+1].gads)
            {
                swap(masivs[b], masivs[b+1]);
            }
        }

    }
    system("cls");
    // izvade
    cout<<"Saraksts\n============================\n";
    for(int i=0; i<n; i++){
        cout<<masivs[i].vards<<"\t"<< masivs[i].uzvards << "\t" << masivs[i].gads;
        cout<<endl;
    }
    system("pause");
}


void ievade(Biedri masivs[10], int& n)
{
     system("pause");
     cout<<"Vards: "; cin>>masivs[n].vards;
     cout<<"Uzvards: "; cin>>masivs[n].uzvards;
     cout<<"Gads: "; cin>>masivs[n].gads;
     n++;
}
