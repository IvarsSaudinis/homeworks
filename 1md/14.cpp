/*
 *  14. uzdevums
 * 
 * Sastādīt programmu, kas aprēķina kuba tilpumu 
 * un pilnas virsmas laukumu, ja kuba malas garumu ievada lietotājs.
 * 
 */


#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char **argv)
{
   
int  metri;
 
 cout <<"Ievadi kuba malas garumu: ";
 cin>>metri;
 
 cout <<"Kuba tilpums: "<<metri*metri*metri<<endl;
 cout <<"Kuba pilnas virsmas laukums: "<<(metri*metri)*6;
  
  
 	
 return 0;
}



