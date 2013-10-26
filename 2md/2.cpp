/*
 *  2. uzdevums
 * 
 *	
 * Sastādīt programmu, kas pieprasa ievadīt trīsciparu skaitli un
 * paziņo, vai ticis ievadīts viencipara, divciparu vai trīsciparu
 * skaitlis.
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
   
char skaitlis[4];
int i=0;
 
 
 cout <<"Ievadi skaitli: ";
 cin >>skaitlis; 
 while(skaitlis[i]!='\0')
	{
		i++;
		
	 
	}
	switch(i) {
		case	1: cout<<"Tika ievadīts viencipara skaitlis";
			break;
		case	2: cout<<"Tika ievadīts divciparu skaitlis";
			break;
		case	3: cout<<"Tika ievadīts trīsciparu skaitlis";
			break;	
		case 	4: cout<<"Tika ievadīts četrciparu skaitlis";
			break;	
		
		}
 	
 return 0;
}



