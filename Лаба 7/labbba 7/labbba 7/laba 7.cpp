#include <iostream>
using namespace std;


#include <iostream.h>
int proverka_vvod()
{ int N;
  cout<<"Vvedite kolichestvo elementov massiva N="<<endl;
  cin>>N;
  while(N<=0||N>20)
	{ cout<<"N vvedeno ne pravilno"<<endl;
      cout<<"Vvedite kolichestvo elementov massiva N="<<endl;
      cin>>N;
	}
  return(N);
  
}




#include <time.h>
#include <stdlib.h>
void avtovvod(int A[],int kol_el)
{  srand( (unsigned)time( NULL ) );
   for (int i=0;i<kol_el;i++)
		A[i]=rand()%kol_el;
   return;
}




void vyvod(const int A[],int kol_el)
{
	cout<<"Vyvod elementov vektora\n";
    for (int i=0;i<kol_el;i++)
		cout<<A[i]<<"\t";
	cout<<endl;
    return;
}



#include<limits.h>
void vvod_el(int A[],int kol_el)
{  for (int i=0;i<kol_el;i++)
	{ cout<<"Vvidite_"<<i<<"_element:";
		cin>>A[i];}      
  return;
}




double summa (int A[],int x,int y,int kol_el)
{ double S;
  S=0;
  for(int i=0;i<kol_el;i++)
	  if(A[i]>=x*y)
		  S*=A[i]*A[i]*A[i];
return (S);
}











int main ()
{ int n;
  int c,d,B[20];
  double Pr;
  char v,g;
  do { n=proverka_vvod(); 
       c=INT_proverka();
	   d=INT_proverka_2();
       cout<<"Esli hotite chtob elementy massiva vvelis avtomaticheski,"<<endl;
       cout<<"to vvedite a, esli hotite vvesti sami, vvedite druguu bukvu"<<endl;
       cin>>v;
       if(v=='a')
	        avtovvod(B,n);
       else vvod_el(B,n);
       vyvod(B,n);
       S=summa(B,c,d,n);
       cout<<"Summa elementov S="<<Pr<<endl;
	   cout<<"Hotite viity iz programmy?"<<endl;
	   cin>>g;}
  while(!(g=='y'||g=='Y'));
  return 0;
}