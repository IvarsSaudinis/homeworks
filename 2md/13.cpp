/*
 *  13. uzdevums
 * 
 * Sastādīt programmu, kas pieprasa ievadīt 3 skaitļus un ekrānā parāda vismazāko no tiem.
 */


#include <iostream>
 

using namespace std;

int main(int argc, char **argv)
{
   

int  x1,x2,x3, min;
 
 
 cout<<"Ievadi 1. skaitli: ";
 cin>>x1;
 cout<<"Ievadi 2. skaitli: ";
 cin>>x2;
 cout<<"Ievadi 3. skaitli: ";
 cin>>x3;
 
 
 if(x1>x2) min = x2;
 if(x2>x3) min = x3;
 if(x3>x1) min = x1;
 cout<<"No šiem skaitļiem vismazakais ir "<<min;
 
  
  
 

 
 	
 return 0;
}



