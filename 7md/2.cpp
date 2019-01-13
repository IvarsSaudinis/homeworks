/* Sastādīt programmu, kas aizpilda masīvu A(N,M) ar nejaušiem latīņu alfabēta mazajiem burtiem.
 * Sakārtot masīva katras kolonnas elementus alfabēta secībā, izmantojot "Burbuļa"
 * kārtošanas algoritmu. M un N ievada lietotājs.
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

    char A[N][M];


    // aizpildīt masīvu un izvadīt šo masīvu ekrānā
    cout << "Aizpildiits, bet nesakartots masivs A[N][M] " << endl;

    for (int a = 0; a < N; a++) {
        for (int b = 0; b < M; b++) {
            A[a][b] = char(rand() % 26 + 97); // mazie burti
            cout << A[a][b] << " ";

        }
        cout << endl;
    }


    // rindas
    for (int kolona = 0; kolona < N; ++kolona)


        // burbuļūdeņa kārtošana
        for (int x = 0; x < N - 1; ++x) {
            for (int y = 0; y < M - x - 1; ++y) {
                if (A[y][kolona] > A[y + 1][kolona]) {
                    swap(A[y][kolona], A[y + 1][kolona]);
                    // cout << "samainitais: " << A[N][y] << endl;
                }
            }
        }


    // Izvade
    cout<<"Sakartots masivs: " << endl;
    for(int a= 0; a<N; a++)
    {
        for(int b=0; b<M; b++)
        {
           cout << A[a][b] << " ";
        }
        cout<<endl;
    }


    return 0;
}
