/*
 *  4. uzdevums
 * 
 * Sastādīt programmu, kas lietotājam ļauj ievadīt preces 
 * sākuma cenu un procentus, par cik preces vērtība jāsamazina, 
 * bet programma aprēķina jauno preces cenu.
 * 
 */


#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char **argv)
{
   
double sakumcena,procenti,beigucena;
 
 cout <<"Ievadi preces sākumcenu: ";
 cin>>sakumcena;
 
 cout <<"Ievadi par cik procentiem jāsamazina cena: ";
 cin>>procenti;
 
 cout <<endl<<"Jaunā cena, kas samazināta par "<<procenti<<"%: ";
 
 beigucena = sakumcena / (100 / procenti);
 cout << fixed << setprecision(2);
 cout<<sakumcena-beigucena;
 
		
	
 	
 return 0;
}



