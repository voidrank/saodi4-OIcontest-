#include <stdio.h>
int main()
{
	double N,x;
	FILE *in,*out;
	in=fopen ("success.in","r");
	out=fopen ("success.out","w");
	fscanf (in,"%lf%lf",&x,&N);
	double sum=0,su,i;
	for (i=1;i<=N;i++)
	{
		su=x/i;
		sum+=su;
		x*=x;
	}
	fprintf(out,"%.4lf",sum);
	fclose (in);
	fclose (out);
	return 0;
}
