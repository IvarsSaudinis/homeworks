/*
 *  4. uzdevums
 * 
 *	Sastādīt programmu, kas aprēķina dotās izteiksmes vērtību. Novērst dalīšanu ar nulli. 
 * x*x+y / 3+x
 * 
 */


#include <iostream>
 

using namespace std;

int main(int argc, char **argv)
{
   

int  zZz;
double x, y,rez;
 
zZz = 0;
 

 
  while(zZz==0)
	{
		 cout <<"Ievadi x:  ";
		 cin >>x;
		 cout <<"Ievadi y: ";
		 cin >>y;
		
		if(x==-3) { cout <<"X nevar būt -3 (lai izvairītos no 0 saucējā! Ievadi citus skaitļus"<<endl<<endl;
			} else {
				
				zZz = 666;
		
		}
	 
	} 
 
  
 cout <<"Izteiksmes \t"<<" \t (x*x)+y"<<endl<<"                      \t --------"<<endl<<"                  \t 3+x"<<endl<<endl;
 rez = ((x*x)+y)/(3+x);
 cout <<"Rezultāts ir: "<<endl<<"----------"<<endl<<(x*x)+y<<endl<<"--  = "<<rez<<endl<<3+x<<endl;
 

 
  
  
 

 
 	
 return 0;
}



