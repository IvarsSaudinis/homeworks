/* Sastādīt programmu, kas aizpilda masīvu A(N,M) ar nejaušiem skaitļiem. Noteikt katras kolonnas maksimālo elementu.
 * Maksimālos elementus sakārtot augošā secībā, izmantojot "Burbuļa" kārtošanas algoritmu. M un N ievada lietotājs.
 */
#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {

    int N = 0;
    int M = 0;

    cout << "Ievadiit N: ";
    cin >> N;
    cout << "Ievadiit M: ";
    cin >> M;

    int A[N][M];

    // izmantosim kā maksimālo vērtību uzglabātāju
    int MAX[M];

    // aizpildīt masīvu un izvadīt šo masīvu ekrānā
    cout << "Aizpildiits masivs A[N][M] " << endl;

    for (int a = 0; a < N; a++) {

        for (int b = 0; b < M; b++) {
            A[a][b] = rand() % 99;
            cout << A[a][b] << " ";
        }
        cout << endl;
    }

    // meklējam maksimālās vērtības kolonā [M]
    for (int a = 0; a < M; a++)
    {
        MAX[a] = 0;
        for (int b = 0; b < N; b++)
        {
          if(MAX[a]< A[b][a])  MAX[a] = A[b][a];
        }
    }


    cout<<"Nesakartots maksimalas vertibas masivs: " << endl;
    for(int b=0; b<M; b++)
    {
        cout << MAX[b] << " ";
    }
    cout << endl;

        // burbuļūdeņa kārtošana
        for (int x = 0; x < M - 1; ++x) {
            for (int y = 0; y < M - x - 1; ++y) {
                if (MAX[y] > MAX[y + 1]) {
                    swap(MAX[y], MAX[y + 1]);
                }
            }
        }
 
    // Izvade
    cout<<"Sakartotas maksimalas vertibas masivs: " << endl;
    for(int b=0; b<M; b++)
    {
        cout << MAX[b] << " ";
    }


    return 0;
}
