/* Sastādīt programmu, kas aizpilda masīvu A(N,M) ar nejaušiem latīņu 
 * alfabēta lielajiem burtiem. Sakārtot masīva katras rindas elementus alfabēta secībā, 
 * izmantojot "Burbuļa" kārtošanas algoritmu. M un N ievada lietotājs.	
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
            A[a][b] = char(rand() % 26 + 65); // lielie burti
            cout << A[a][b] << " ";
        }
        cout << endl;
    }


    // rindas
    for (int rinda = 0; rinda < N; ++rinda)


        // burbuļūdeņa kārtošana
        for (int x = 0; x < M - 1; ++x) {
            for (int y = 0; y < M - x - 1; ++y) {
                if (A[rinda][y] > A[rinda][y + 1]) {
                    swap(A[rinda][y], A[rinda][y + 1]);                   
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
