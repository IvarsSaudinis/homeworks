/*
 *  18. uzdevums
 * 
 * Sastādīt programmu, kura nosaka vai lietotāja ievadītais skaitlis ir 
 * pāra vai nepāra skaitlis.
 * 
 */


#include <iostream>
 

using namespace std;

int main(int argc, char **argv)
{
   

int  x;
 
 
 cout<<"Ievadi skaitli: ";
 cin>>x;

 if(x!=0) {  
 
		 if(x%2==0) {
			 cout<<"Skaitlis ir pāra skaitlis";
		 } else {
			
		 cout<<"Skaitlis ir nepāra ";
			}
 } else {
	 cout<<"Skaitlis ir 0";
	 
 }
  
 
   
 
 	
 return 0;
}



