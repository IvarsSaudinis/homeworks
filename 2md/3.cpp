/*
 *  3. uzdevums
 * 
 *	Sastādīt programmu, kas pieprasa ievadīt 3 skaitļus un
 *  ekrānā parāda vislielāko no tiem.	
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
   

int a,b,c, max=0;
 
 
 
 cout <<"Ievadi 3 skaitļus:  "<<endl<<"1: ";
 cin >>a;
 cout <<"2: ";
 cin >>b; 
 cout <<"3: ";
 cin >>c; 
 
 cout <<"Lielākais no šiem ir: ";
 
 if(a>max) max =a;
 if(b>max) max =b;
 if(c>max) max =c;
 
 cout<<max;
  
 

 
 	
 return 0;
}



