/*
 *  7. uzdevums
 * 
 *	Sastādīt programmu, kas aprēķina funkcijas y vērtību, ja mainīgo 
 * x ievada lietotājs.
 * 
 */


#include <iostream>
#include <stdio.h>
#include <math.h> 

using namespace std;

int main(int argc, char **argv)
{
   

int  x;
double rez;
 

 
 
 cout<<"Ievadi skaitli: ";
 cin>>x;
 
 if(x<0) 	rez = (x*x) + (2*x) +3;
 if(x>=0) 	rez = sqrt(x)+7;
 
 
 printf ("%f\n", rez);

 
 	
 return 0;
}



