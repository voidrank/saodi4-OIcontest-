#include<stdio.h>
int main()
{
	FILE *in,*out;
	long long n;
	double sum=0,t=1,x,i,j;
	in=fopen("success.in","r");
	out=fopen("success.out","w");
	fscanf(in,"%lf%I64d",&x,&n);
	if(x<=0.995&&n>5000)n=5000;
	else if(x>0.995&&n>20000)n=20000;
	for(i=1;i<=n;i++)
	{t=1;
		for(j=1;j<=i;j++)
			t=t*x;
		sum+=t/i;
	}
	fprintf(out,"%.4lf",sum);
	fclose(in);
	fclose(out);
return 0;
}