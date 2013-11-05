double summa (int A[],int x,int y,int kol_el)
{ double P;
  S=0;
  for(int i=0;i<kol_el;i++)
	  if(A[i]>=x*y)
		  S*=A[i]*A[i]*A[i];
return (S);
}