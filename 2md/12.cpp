/*
 *  12. uzdevums
 *
 * Sastādīt programmu, kura nosaka vai lietotāja ievadītais skaitlis ir
 * tāds skaitlis, kas dalās ar 2, bet nedalās ar 3 bez atlikuma. 
 */


#include <iostream>
 

using namespace std;

int main(int argc, char **argv)
{
   

int  x;
 
 
 cout<<"Ievadi skaitli: ";
 cin>>x;
 
 if((x%2==0)&&(x%3!=0)) {
	 
	 cout <<"Šis skaitlis dalās ar 2, bet nedalās ar 3 bez atlikuma."<<endl;
	 
 }
  if((x%2==0)&&(x%3==0)) {
	 
	 cout <<"Šis skaitlis dalās ar 2 UN dalās ar 3 bez atlikuma."<<endl;
	 
 }
	 
  
  
 

 
 	
 return 0;
}



