#include <limits.h>
int INT_proverka_2()
{int a;
do { cout<<"d=";
               cin>>a;
		       if((a<INT_MIN)||(a>INT_MAX))
		           cout<<"Chislo ne vhodit v diapazon tipa dannyh"<<endl;
				}
          while(!((a<=INT_MAX)&&(a>=INT_MIN)));
return a;
}