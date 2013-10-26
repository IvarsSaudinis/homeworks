/*
 *  16. uzdevums
 * 
 * Sastādīt programmu, kas novērtē lietotāja masas koeficientu 
 * (par mazs, optimāls, par daudz), ja lietotājs ievada savu 
 * garumu un svaru. Masas koeficientu var noteikt pēc formulas = augums 
 * centimetros – 100. Optimālā masa ir intervālā no 80 % līdz 120 % no
 * masas koeficienta.
 * 
 */


#include <iostream>
 

using namespace std;

int main(int argc, char **argv)
{
   

double  cm,kg,k, min, max;
 
 
 cout<<"Ievadi savu garumu (cm): ";
 cin>>cm;
 cout<<"Ievadi savu svaru (kg): ";
 cin>>kg; 
 
 k=cm-100;
 
 min = k*0.8;
 max = k*1.2;
 
  
 if(kg<min) cout<<"Masas koeficients ir par mazu "; 
 if(kg>max) cout<<"Masas koeficients ir par lielu ";
 if((kg>min)&&(kg<max)) cout<<"Masas koeficients ir optimāls";
 
   
 
 	
 return 0;
}



