#include <stdio.h>
#include <string.h>
#include <time.h>
int main()
{
	FILE*in,*out;
	in=fopen("success.in","r");
	out=fopen("success.out","w");
	double x,k,y,a;
	long long i,j,n;
	fscanf(in,"%lf%I64d",&x,&n);
	k=0.000000;
	a=0.000000;
	if (x<=0.9&&n>1000) n=1000;
	for (i=1;i<=n;i++)
	{
		a=a+1.000000;
		y=1.000000;
		for (j=1;j<=i;j++) y=y*x;
		y=y/a;
		k=k+y;
	}
	fprintf(out,"%.4lf",k);
	fclose(in);
	fclose(out);
	return 0;
}
