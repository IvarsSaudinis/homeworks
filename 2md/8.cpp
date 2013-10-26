/*
 *  8. uzdevums
 * 
 *	Sastādīt programmu, kas pieprasa lietotājam ievadīt 2 
 *  skaitļus un ekrānā izvada lielākā un mazākā skaitļa starpību.
 * 
 */


#include <iostream>
 

using namespace std;

int main(int argc, char **argv)
{
   

int  x, y, rez;
 
 

 
 
 cout<<"Ievadi 1. skaitli: ";
 cin>>x;
 cout<<"Ievadi 2. skaitli: ";
 cin>>y;
 
 rez = x-y;
 if(y>x) rez = y-x;

 cout<<"Lielākā un mazākā skaitļa starpība ir "<<rez;
 
 	
 return 0;
}



