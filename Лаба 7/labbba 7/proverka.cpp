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