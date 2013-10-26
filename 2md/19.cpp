/*
 *  19. uzdevums
 * 
 * Pārbaudīt, vai zibatmiņā var ierakstīt video failu, kuras ilgums 
 * ir m minūtes un n sekundes, ja zibatmiņā ir x GB brīvas vietas, 
 * bet, lai ierakstītu video faila vienu sekundi ir 
 * nepieciešami y MB. N, m, x un y ievada lietotājs. 
 * 
 */


#include <iostream>
 

using namespace std;

int main(int argc, char **argv)
{
   

int  n, m, x, y;
 
 
 cout<<"Ievadi video garuma minūtes: ";
 cin>>m;
 //uzreiz parversam sekundēs
 m=m*60;
 
 cout<<"Ievadi video garuma atlikušās sekundes: ";
 cin>>n;
 //kopā sekundes
 n=n+m;
 
 
 cout<<"Ievadi zibatmiņas brīvo vietu gigabaitos: ";
 cin>>x;
 //uzreiz parversam GB uz MB
 x=x*1024;
 
 
 cout<<"Viena sekunde aizņem cik megabaitus? Ievadi skaitli: ";
 cin>>y;
 //cik aizņems vietas viss video?
 y=y*n;
 

 if(x>=y){
	 cout<<"Varēs ierakstīt!"<<endl<<"Brīvā vieta ir "<<x<< " MB"<<endl;
	 cout<<"Video aizņem "<<y<< " MB";
 } else {
	 cout<<"Nevarēs ierakstīt! :("<<endl<<"Brīvā vieta ir "<<x<< "MB"<<endl;
	 cout<<"Video aizņem "<<y<< " MB";
	}
  
 
   
 
 	
 return 0;
}



