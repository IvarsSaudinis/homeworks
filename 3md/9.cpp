/*
 * 9. uzdevums
 * 
 * Biļetes numurs sastāv no 6 cipariem. Uzskatīsim biļeti par laimīgu,
 * ja biļetes numura pirmo trīs ciparu summa ir vienāda ar pēdējo trīs
 * ciparu summu. Sastādīt programmu, kas nosaka vai lietotāja ievadītais 
 * biļetes numurs ir laimīgs.
 *    
 */

#include <iostream>
#include <stdlib.h>     
   

using namespace std;

int main(int argc, char **argv)
{
 
 char bilete[5];
 int s1=0,s2=0;

 cout<<"Ievadiet biļetes 6 ciparus: "; 
 cin>>bilete;
 
 
 for (int x=5; x>2; x--) {
  s2=s2+(bilete[x]-'0');
  //cout<<bilete[x]-'0'<<endl;
     
 }   
  
 for (int z=0; z<3; z++) {
  s1=s1+(bilete[z]-'0');
  //cout<<bilete[z]-'0'<<endl;
     
 } 
 cout<<"---------"<<endl;

 
 
 cout<<endl<<s1<<" | "<<s2<<endl;
 if(s1==s2) {cout<<"LAIMĪGĀ BIĻETE!!!!!!!!!";}
 
 
   	
 return 0;
}



