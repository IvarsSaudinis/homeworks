/*
 *  17. uzdevums
 * 
 * Sastādīt programmu, kura nosaka vai lietotāja ievadītais skaitlis 
 * dalās ar 7 bez atlikuma.
 * 
 */


#include <iostream>
 

using namespace std;

int main(int argc, char **argv)
{
   

int  x;
 
 
 cout<<"Ievadi skaitli: ";
 cin>>x;
 
 if(x%7==0) {
	 cout<<"Skaitlis dalās bez atlikuma";
 } else {
	 cout<<"Skaitlis dalās ar atlikumu ["<<x%7<<"]";
	 
 }
  
 
   
 
 	
 return 0;
}



