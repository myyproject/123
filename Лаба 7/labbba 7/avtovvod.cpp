#include <time.h>
#include <stdlib.h>
void avtovvod(int A[],int kol_el)
{  srand( (unsigned)time( NULL ) );
   for (int i=0;i<kol_el;i++)
		A[i]=rand()%kol_el;
   return;
}