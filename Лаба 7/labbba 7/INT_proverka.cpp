#include <limits.h>
int INT_proverka()
{ int a;
	do {cout<<"Vvedite konci otrezka c,d,na kotorom nuzno nahodit summu c="<<endl;
     cin>>a;
     if((a<INT_MIN)||(a>INT_MAX))
           cout<<"Chislo ne vhodit v diapazon tipa dannyh"<<endl;
		}
     while(!((a<=INT_MAX)&&(a>=INT_MIN)));
return (a);
}