/*
 * Sastādīt programmu, kura atšifrē failu atsifre.dat, ja zināma šifra atslēga. Atšifrēto tekstu ierakstīt failā zinu.rez.
*/
#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

int main() {

    char atslega[27][2] = {
            {'=', 'a'}, {'1', 'b'}, {'+', 'c'},
            {'2', 'd'}, {'&', 'e'}, {')', 'f'},
            {'3', 'g'}, {'4', 'h'}, {'-', 'i'},
            {'5', 'j'}, {'6', 'k'}, {'}', 'l'},
            {'7', 'm'}, {'^', 'n'}, {'8', 'o'},
            {'$', 'p'}, {'#', 'r'}, {'{', 's'},
            {'%', 't'}, {'@', 'u'}, {'9', 'v'},
            {'q', 'z'}, {'(', '*'}, {'x', '.'},
            {'c', ','}, {'>', ':'}, {'<', '-'}
    };

    char x;

	bool atradums = false;

	ofstream rezultats;
	rezultats.open("zinu.rez", ios::out);

    ifstream fails;
    fails.open("atsifre.dat", ios::in);
    fails.get(x);
    while(!fails.eof()){
    	atradums = false;
    	for(int a=0; a<27; ++a)
    	{
    		if(atslega[a][0]==x)
    		{
    			cout<<atslega[a][1];
    			rezultats<<atslega[a][1];
    			atradums = true;
    			break;
			}  
		}
		if(atradums==false)
		{
           rezultats<<x;
			cout<<x;
		}
    	
       
        fails.get(x);  
    }

    fails.close();
    rezultats.close();

    return 0;
}
