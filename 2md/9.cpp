/*
 *  9. uzdevums
 * 
 * Sastādīt programmu, kas nosaka vai lietotāja ievadītā
 * skaitļa pēdējie divi cipari veido skaitli, kas dalās ar 4.
 * 
 */


#include <iostream>
 

using namespace std;

int main(int argc, char **argv)
{
   

int  x, sk1, sk2;
  
 cout<<"Ievadi skaitli: ";
 cin>>x;
 
 sk1 =  (x % 100)   / 10;  
 sk2 =	 x % 10; 
 
 x = (sk1*10)+sk2;
 
 if(x%4==0) {
	 cout <<"Skaitlis no pēdējiem 2 cipariem ("<<x<<") dalās ar 4!"; 
 } else {
	 
	  cout <<"Skaitlis no pēdējiem 2 cipariem ("<<x<<") nedalās ar 4! Atlikumā paliek vēl "<<x%4;
  }

  
 
 	
 return 0;
}



