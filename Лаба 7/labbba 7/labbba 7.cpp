#include <iostream.h>
#include "proverka.cpp"
#include "avtovvod.cpp"
#include "Vyvod.cpp"
#include "Vvod_el.cpp"
#include "proizvedenie.cpp"
#include "LONG_proverka.cpp"
#include "LONG_proverka_2.cpp"

int proverka_vvod();
void avtovvod(int[],int);
void vyvod(const long[],int);
void vvod_el(long[],int);
double proizvedenie (long[],long,long,int);
long LONG_proverka();
long LONG_proverka_2();

int main ()
{ int n;
  long c,d,B[20];
  double Pr;
  char v,g;
  do { n=proverka_vvod(); 
       c=LONG_proverka();
	   d=LONG_proverka_2();
       cout<<"Esli hotite chtob elementy massiva vvelis avtomaticheski,"<<endl;
       cout<<"to vvedite a, esli hotite vvesti sami, vvedite druguu bukvu"<<endl;
       cin>>v;
       if(v=='a')
	        avtovvod(B,n);
       else vvod_el(B,n);
       vyvod(B,n);
       Pr=proizvedenie(B,c,d,n);
       cout<<"Proizvedenie elementov P="<<Pr<<endl;
	   cout<<"Hotite viity iz programmy?"<<endl;
	   cin>>g;}
  while(!(g=='y'||g=='Y'));
  return 0;
}